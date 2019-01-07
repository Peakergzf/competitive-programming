/*
TASK: wormhole
LANG: C++                 
*/

// http://usaco.org/current/data/sol_wormhole.html

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define MAX_N 12

int N;
vi X(MAX_N + 1), Y(MAX_N + 1);

// partner[i] = the partner wormhole of i
vi partner(MAX_N + 1);

// next_on_right[i] = the next wormhole on the right of i
vi next_on_right(MAX_N + 1);

bool cycle_exists() {
    // given a possible pairing, check if cycle exists by simulation

    for (int start = 1; start <= N; start++) { // for each possible start pos
        int pos = start;
        for (int j = 0; j < N; j++) {
            // keep going right or teleport to partner for a while (N moves)
            pos = next_on_right[partner[pos]];
        }
        if (pos != 0) { // if the pos is still valid
            return true;
        }
    }
    return false;
}

int cycle_cnt() {
    // count the # of cycles for all possible of pairing

    // find the first unpaired wormhole
    int i, cnt = 0;
    for (i = 1; i <= N; i++) {
        if (partner[i] == 0) {
            break;
        }
    }

    // check if everyone if paired (base case)
    if (i > N) {
        if (cycle_exists()) return 1;
        else return 0;
    }

    // try pairing i with all other possible wormholes j
    for (int j = i + 1; j <= N; j++) {
        if (partner[j] == 0) {
            partner[i] = j;
            partner[j] = i;
            cnt += cycle_cnt();
            partner[i] = partner[j] = 0;
        }
    }

    return cnt;
}

int main() {
    freopen("wormhole.in", "r", stdin);
    freopen("wormhole.out", "w", stdout);

    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> X[i] >> Y[i];
    }

    // construct next_on_right array
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            // for each pair i j
            if (Y[j] == Y[i] && X[j] > X[i]) { // if j is on the right of i
                if (next_on_right[i] == 0 || X[j] < X[next_on_right[i]]) {
                    // update if i is not updated before or j is closer
                    next_on_right[i] = j;
                }
            }
        }
    }

    cout << cycle_cnt() << endl;

    return 0;
}

