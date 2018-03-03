#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int a, b; cin >> a >> b;
  int n; cin >> n;
  vector<double> vt(n);
  for (int i=0; i<n; i++) {
    int x, y, v; cin >> x >> y >> v;
    double t = ((x-a)*(x-a)+(y-b)*(y-b))/double(v*v);
    vt[i] = t;
  }
  sort(vt.begin(), vt.end());
  cout << fixed << setprecision(20) << sqrt(vt[0]) << endl;

  return 0;
}
