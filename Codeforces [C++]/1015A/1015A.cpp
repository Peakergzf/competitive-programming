#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, m; cin >> n >> m;
  vi coord(m+1);
  while (n--) {
    int L, R; cin >> L >> R;
    for (int i=L; i<=R; i++) coord[i] = 1; 
  }
  vi ans;
  for (int i=1; i <= m; i++) {
    if (coord[i] == 0) {
      ans.push_back(i);
    }
  }
  cout << ans.size() << endl;
  for (int i=0; i < int(ans.size()); i++) {
    cout << ans[i] << " ";
  }
  cout << endl;
  
  return 0;
}
