#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, m; cin >> n >> m;
  vi a(m+1);
  for (int i=1; i<=m; i++) cin >> a[i];

  ll ans=0;
  int pre=1;
  for (int i=1; i<=m; i++) {
    if (a[i] >= pre) ans += a[i] - pre;
    else ans += a[i] - pre + n;
    pre = a[i];
  }

  cout << ans << endl;

  return 0;
}
