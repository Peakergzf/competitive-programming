#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, m, ans=1001; cin >> n >> m;
  vi f(m);
  for (int i=0; i<m; i++) cin >> f[i];
  sort(f.rbegin(), f.rend());
  for (int i=0; i<=m-n; i++) ans=min(ans, f[i]-f[i+n-1]);
  cout << ans << endl;

  return 0;
}
