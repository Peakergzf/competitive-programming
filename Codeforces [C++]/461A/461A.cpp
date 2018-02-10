#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  vector<ll> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end());
  ll ans = v[n-1]*n;
  for (int i=0; i<n-1; i++) ans += v[i]*(i+2);
  cout << ans << endl;

  return 0;
}
