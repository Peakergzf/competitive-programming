#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  vi a(n), b(n-1), c(n-2), vab(2*n-1), vbc(2*n-3);
  vi::iterator itab, itbc;

  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n-1; i++) cin >> b[i];
  for (int i=0; i<n-2; i++) cin >> c[i];

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());

  itab = set_difference(a.begin(), a.end(), b.begin(), b.end(), vab.begin());
  vab.resize(itab-vab.begin());

  itbc = set_difference(b.begin(), b.end(), c.begin(), c.end(), vbc.begin());
  vbc.resize(itbc-vbc.begin());

  cout << vab[0] << endl;
  cout << vbc[0] << endl;

  return 0;
}
