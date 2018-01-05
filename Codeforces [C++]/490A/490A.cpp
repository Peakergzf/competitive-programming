#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, t, w; cin >> n;
  vi a, b, c;

  for (int i=1; i<=n; i++) {
    cin >> t;
    if (t==1) a.push_back(i);
    if (t==2) b.push_back(i);
    if (t==3) c.push_back(i);
  }

  w = min(a.size(), min(b.size(), c.size()));
  cout << w << endl;

  for (int i=0; i<w; i++) cout << a[i] << " " << b[i] << " " << c[i] << endl;

  return 0;
}
