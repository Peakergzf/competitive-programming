#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, maxA=0, ans=0; cin >> n;
  vi a(n);
  
  for (int i=0; i<n; i++) cin >> a[i], maxA = max(maxA, a[i]);

  for (int i=0; i<n; i++) ans += (maxA-a[i]);

  cout << ans << endl;

  return 0;
}
