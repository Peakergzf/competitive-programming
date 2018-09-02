#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, cur;
	cin >> n >> m;
	int ans = 0;

	// dp[i,j] = size of the max square matrix with bottom right corner at [i,j]
	vector<vector<int> > dp(n, vector<int>(m, 0));

	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++){
			cin >> cur;
			if (i == 0 || j == 0 || cur == 0){ // first row or first column or the entry is 0
				dp[i][j] = cur;
			}
			else{
				if (dp[i-1][j] == 0 || dp[i-1][j-1] == 0 || dp[i][j-1] == 0){ // start over, can't expand previous square matrix
					dp[i][j] = cur;
				}
				else { // can, min makes sure it's still square
					dp[i][j] = min(min(dp[i-1][j], dp[i-1][j-1]), dp[i][j-1]) + 1;
				}
			}
			ans = max(ans, dp[i][j]);
		}
	}
	cout << ans << endl;
}