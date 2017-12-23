#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  ll ans=0, count=1;
  vll a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=1; i<n; i++){
    if (a[i]>=a[i-1]) count++;
    else ans=max(count, ans), count=1;
  }
  ans=max(count, ans);
  cout << ans << endl;

  return 0;
}
