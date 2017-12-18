#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, k; cin >> n >> k;
  vi a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  int s = a[k-1], ans=0;
  for (int i=0; i<n; i++) if (a[i]>=s && a[i]>0) ans++;
  cout << ans << endl;

  return 0;
}
