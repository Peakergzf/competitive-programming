#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

int main() {
  ll n; cin >> n;

  vvll choose(n+1, vll(n+1, 0));
  for (int i=0;i<n+1;i++){
    choose[i][0] = 1;
    choose[i][i] = 1;
    for (int j=1;j<i;j++){
      choose[i][j] = choose[i-1][j-1] + choose[i-1][j];
    }
  }

  ll ans = choose[n][5];
  for (int i=0;i<5;i++){
    ans *= (n-i);
  }
  cout << ans << endl;

  return 0;
}
