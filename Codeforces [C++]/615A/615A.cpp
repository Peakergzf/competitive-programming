#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, m; cin >> n >> m;
  vi v(m);
  while (n--) {
    int x; cin >> x;
    while (x--) {
      int y; cin >> y;
      v[y-1]++;
    }
  }
  bool yes=true;
  for (int i=0; i<m; i++) if (v[i]==0) yes=false;
  cout << (yes? "YES" : "NO") << endl;

  return 0;
}
