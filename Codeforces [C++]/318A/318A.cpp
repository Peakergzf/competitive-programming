#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll n, k, ans; cin >> n >> k;

  if (n%2 == 0){
    if (k <= n/2) ans = k*2-1;
    else ans = (k-n/2)*2;
  }
  else{
    if (k <= n/2+1) ans = k*2-1;
    else ans = (k-(n/2+1))*2;
  }
  cout << ans << endl;

  return 0;
}
