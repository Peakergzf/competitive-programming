#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    // knapsack with weight == value

    int N, M; // N mins long, M tracks
    while (cin >> N >> M) {

        // dp[i][j] = max mins considering the first i tracks with capacity j
        vvi dp(M + 1, vi(N + 1, 0));

        // duration of each track
        vi dur(M);
        for (int i = 0; i < M; i++) cin >> dur[i];

        for (int i = 1; i <= M; i++) { // for each track
            int cur = dur[i - 1]; // current track

            for (int j = 1; j <= N; j++) { // for each capacity
        
                if (cur > j) { // if the track doesn't fit
                    dp[i][j] = dp[i - 1][j];
                }
                else {
                    dp[i][j] = max(
                        dp[i - 1][j], // don't include the track
                        cur + dp[i - 1][j - cur] // include the track
                    );
                }
            }
        }

        int k = N;
        vi items;
        for (int i = M; i >= 1; i--) {
            // if we have diff values considering the first i and first i - 1 items with cap k
            if (dp[i][k] != dp[i - 1][k]) {
                items.push_back(dur[i - 1]); // we took the ith item
                k -= dur[i - 1];
            }
        }
        reverse(items.begin(), items.end());
        for (int i = 0; i < (int)items.size(); i++) {
            cout << items[i] << " ";
        }
        cout << "sum:" << dp[M][N] << endl;
    }

    return 0;
}