/*
TASK: numtri
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;


int main() {
    freopen("numtri.in", "r", stdin);
    freopen("numtri.out", "w", stdout);

    int R; cin >> R;
    vvi tri(R, vi(R, -1));
    vvi dp(R, vi(R, -1));

    /*
    tri            dp
    7              7
    3 8            10 15
    8 1 0          18 16 15       e.g 16 = max(10, 15) + 1
    2 7 4 4        20 25 20 19
    4 5 2 6 5      24 30 27 26 23
    */

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < i + 1; j++) {
            cin >> tri[i][j];
        }
    }

    dp[0][0] = tri[0][0]; // base case 

    for (int i = 1; i < R; i++) {
        for (int j = 0; j < i + 1; j++) {
            if (j == 0) { // left most number
                dp[i][j] = dp[i - 1][j] + tri[i][j];
            }
            else if (j == i) { // right most number
                dp[i][j] = dp[i - 1][j - 1] + tri[i][j];
            }
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + tri[i][j];
            }
        }
    }

    // max number of the last row
    cout << *max_element(dp[R - 1].begin(), dp[R - 1].end()) << endl;

    return 0;
}