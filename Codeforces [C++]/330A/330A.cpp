#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int r, c, ans=0; cin >> r >> c;
  vi cFreq(c);
  bool noSAtAll=true;
  int sRowCount=0;
  for (int i=0; i<r; i++) {
    string s; cin >> s;
    bool withS=false;
    for (int j=0; j<c; j++) {
      if (s[j]=='S') {
        noSAtAll=false;
        withS=true;
        cFreq[j]++;
      }
    }
    if (!withS) {
      ans+=c;
      sRowCount++;
    }
  }
  if (!noSAtAll) for (int i=0; i<c; i++) if (cFreq[i]==0) ans+=(r-sRowCount);

  cout << ans << endl;

  return 0;
}
