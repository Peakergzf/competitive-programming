#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string n; cin >> n;
  ll count=0;
  for (int i=0; i<(int)n.size(); i++) if (n[i]=='4' || n[i]=='7') count++;
  string s = to_string(count);
  bool flag=true;
  for (int i=0; i<(int)s.size(); i++) if (!(s[i]=='4' || s[i]=='7')) flag=false;
  if (flag) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}
