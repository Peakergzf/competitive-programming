/*
TASK: castle
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;


const int MAX_SIDE = 50; // max width or height

const int MAX_N_NODE = MAX_SIDE * MAX_SIDE; // max number of nodes

const int SOU = 8, EST = 4, NOR = 2, WST = 1; // wall direction values

const int VISITED = 1, UNVISITED = -1;  // values in dfs_num

const string DIR = "-WN-E---S"; // for output char d, use direction's value to index

int M, N; // width, height

vvi walls(MAX_SIDE, vi(MAX_SIDE)); // sum of wall direction values for each room

vector<set<int>> adj_list(MAX_N_NODE + 1);

vi dfs_num(MAX_N_NODE + 1, UNVISITED);

vi cc_num(MAX_N_NODE + 1, -1); // connected-component number for each node

vi comp_size(MAX_N_NODE + 1, 0); // size of each component

// ans: area of the two largest 'merge-able' components
// row, col, d: which room, which wall to be removed
int ans = 0, row = -1, col = MAX_SIDE;
char d;


void f(int i, int j, bool add_edge) {
    // given room (i, j)
    // build graph if add_edge is true, update answer otherwise
    int u, v;
    u = i * M + j; // construct vertex u from room (i, j)
    int sum = walls[i][j];
    // e.g. for dir = 8, the sum of all other directions 1, 2, 4 is less than 8,
    // (similarly 1 + 2 < 4), so we can subtract from sum to check which walls the room has
    for (int dir : {SOU, EST, NOR, WST}) {
        // construct vertex v based on the direction to vertex u
        if (dir == SOU) v = u + M;
        if (dir == EST) v = u + 1;
        if (dir == NOR) v = u - M;
        if (dir == WST) v = u - 1; 

        if (sum >= dir) { // has wall in that direction
            sum -= dir;
            if (!add_edge) { // update ans
                // can't break outter walls
                if ((i == 0 && dir == NOR) ||
                    (i == N - 1 && dir == SOU) ||
                    (j == 0 && dir == WST) ||
                    (j == M - 1 && dir == EST)) continue;

                // can't connect comp with itself
                if (cc_num[u] == cc_num[v]) continue;

                int cur = comp_size[cc_num[u]] + comp_size[cc_num[v]];

                // room: farthest to the west > farthest to the south
                // wall: N > E
                if ((cur > ans) ||
                    (ans == cur && j < col) ||
                    (ans == cur && j == col && i > row) ||
                    (ans == cur && j == col && i == row && dir == NOR)) 
                {
                    ans = cur, row = i, col = j;
                    d = DIR[dir];
                }
            }
        }
        else { // doesn't have wall in that direction
            if (add_edge) {
                adj_list[u].insert(v);
                adj_list[v].insert(u);
            }
        }
    }
}

void dfs(int u, int id) {
    // current node u, component id
    dfs_num[u] = VISITED;
    cc_num[u] = id;
    for (int v : adj_list[u]) {
        if (dfs_num[v] == UNVISITED) {
            dfs(v, id);
        }
    }
}

int main() {
    freopen("castle.in", "r", stdin);
    freopen("castle.out", "w", stdout);

    cin >> M >> N;

    // read input, build graph
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> walls[i][j];
            f(i, j, true);
        }
    }

    int cnt = 0; // current connected component number
    for (int i = 0; i < M * N; i++) { // for each vertex
        if (dfs_num[i] == UNVISITED) {
            cnt++;
            dfs(i, cnt);
        }
    }
    cout << cnt << endl; // total number of components

    // count number of vertices for each component
    for (int i = 0; i < N * M; i++) {
        comp_size[cc_num[i]]++;
    }

    // largest size component
    cout << *max_element(comp_size.begin(), comp_size.end()) << endl;

    // update ans, row, col, d
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            f(i, j, false);
        }
    }

    cout << ans << endl;

    cout << row + 1 << " " << col + 1 << " " << d << endl;

    return 0;
}
