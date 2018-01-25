#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, m; cin >> n >> m;

  vector<vector<string> > vvs;
  for (int i=0; i<m; i++) {
    vector<string> vs(2);
    cin >> vs[0] >> vs[1];
    vvs.push_back(vs);
  }
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    for (int j=0; j<m; j++) {
      if (find(vvs[j].begin(), vvs[j].end(), s) != vvs[j].end()){
        cout << ((vvs[j][0].size()<=vvs[j][1].size())? vvs[j][0] : vvs[j][1]);
      }
    }
    if (i!=n-1) cout << " ";
  }

  return 0;
}
