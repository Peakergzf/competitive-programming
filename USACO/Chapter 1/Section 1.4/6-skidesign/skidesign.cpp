/*
TASK: skidesign
LANG: C++                 
*/

// http://www.usaco.org/current/data/sol_skidesign.html

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    freopen("skidesign.in", "r", stdin);
    freopen("skidesign.out", "w", stdout);

    int N; cin >> N; // N <= 1000
    vi height(N); // height[i] <= 100
    for (int i = 0; i < N; i++) cin >> height[i];

    int ans = numeric_limits<int>::max();

    for (int lo = 0; lo <= 83; lo++) { // for each interval

        int hi = lo + 17;

        int cost = 0;

        for (int i = 0; i < N; i++) {
            
            if (height[i] < lo) {
                cost += (lo - height[i]) * (lo - height[i]);
            }
            else if (height[i] > hi) {
                cost += (height[i] - hi) * (height[i] - hi);
            }

        }

        ans = min(cost, ans);
    }

    cout << ans << endl;

    return 0;
}
