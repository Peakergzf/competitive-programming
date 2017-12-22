#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  string ans="NO";

  for (int i=1; i<=n; i++){
    string s = to_string(i);
    bool flag=true;
    for (int j=0; j<(int)s.size(); j++) if (!(s[j]=='4'||s[j]=='7')) flag=false;
    if (flag) if (n%i==0) ans="YES";
  }
  cout << ans << endl;

  return 0;
}
