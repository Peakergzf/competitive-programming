/*
TASK: combo
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool within_2_pos(int a, int b, int N) {
    int c = max(a, b), d = min(a, b);
    return c - d <= 2 || d - (c - N) <= 2;
    // d - (c - N) is for e.g. a = 1, b = 49, N = 50
}

bool close(vi john, vi master, vi cur, int N) {
    bool to_john = true, to_master = true;
    for (int i = 0; i < 3; i++) {
        to_john &= within_2_pos(john[i], cur[i], N);
        to_master &= within_2_pos(master[i], cur[i], N);
    }
    return to_john || to_master;
}

int main() {
    freopen("combo.in", "r", stdin);
    freopen("combo.out", "w", stdout);

    int N; cin >> N;
    vi john(3);
    vi master(3);

    for (int i = 0; i < 3; i++) cin >> john[i];
    for (int i = 0; i < 3; i++) cin >> master[i];

    int ans = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            for (int k = 1; k <= N; k++) {
                if (close(john, master, {i, j, k}, N)) {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}