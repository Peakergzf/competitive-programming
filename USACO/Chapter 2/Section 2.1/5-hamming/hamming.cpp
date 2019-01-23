/*
TASK: hamming
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

// void printB(int x, int len) {
//     string res = "";
//     while (x) {
//         res += to_string(x % 2);
//         x /= 2;
//     }
//     reverse(res.begin(), res.end()); 
//     res = string(len - res.size(), '0') + res;
//     cout << res << endl;
// }

const int MAX_B = 8; // max # of digits
const int MAX_NUM = (2 << MAX_B); // max # of numbers

int N, B, D; 
// N codewords, each of length B bits
// s.t. each has Hamming distance >= D from each other

set<set<int>> visited;

vvi dist(MAX_NUM, vi(MAX_NUM, 0));
// (TLE without this pre-computation)

int hamming_dist(int a, int b) {
    // calculates the hamming distance between a and b
    int c = a ^ b;
    int cnt = 0;
    while (c) {
        c &= c - 1;
        cnt++;
    }
    return cnt;
}

void print_ans(set<int> ans) {
    vi v(ans.begin(), ans.end());
    int cnt = 0;
    for (int i = 0; i < (int)v.size(); i++) {
        cout << v[i];
        cnt++;
        if (cnt % 10 == 0) cout << endl; // ten numbers per line
        else if (i != (int)v.size() - 1) cout << " ";
    }
    if (cnt % 10 != 0) cout << endl;
}

void rec(set<int> cur) {
    if (visited.count(cur)) return;

    if ((int)cur.size() == N) { // ans found
        print_ans(cur);
        exit(0);
    }

    visited.insert(cur);

    int i;
    for (i = 0; i < (2 << (B - 1)); i++) {
        // for each potential new number i

        if (cur.count(i)) continue;

        // add i to cur if 
        // if i is D distance away from every j in cur
        bool is_d_away = true;
        for (int j : cur) {
            if (dist[i][j] < D) {
                is_d_away = false;
                break;
            }
        }
        if (!is_d_away) continue;

        cur.insert(i);
        rec(cur);
        cur.erase(i);
    }
}


int main() {
    freopen("hamming.in", "r", stdin);
    freopen("hamming.out", "w", stdout);

    cin >> N >> B >> D;

    int i, j;
    for (i = 0; i < (2 << (B - 1)); i++) {
        for (j = i + 1; j < (2 << (B - 1)); j++) {
            dist[i][j] = dist[j][i] = hamming_dist(i, j);
        }
    }

    rec({});

    return 0;
}