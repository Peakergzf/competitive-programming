#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  vi p(n);
  for (int i=0; i<n; i++) cin >> p[i];

  int total = accumulate(p.begin(), p.end(), 0);

  cout << fixed << setprecision(12) << total*1.0/n << endl;

  return 0;
}
