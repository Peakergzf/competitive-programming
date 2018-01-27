#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  vi x(n);
  for (int i=0; i<n; i++) cin >> x[i];
  sort (x.begin(), x.end());
  int q; cin >> q;
  for (int i=0; i<q; i++) {
    ll m; cin >> m;
    int ans = upper_bound(x.begin(), x.end(), m)-x.begin();
    cout << ans << endl;
  }

  return 0;
}
