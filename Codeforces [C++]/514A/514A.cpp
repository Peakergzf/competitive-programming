#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string x, ans="", s; cin >> x;
  for (int i=0; i<(int)x.size(); i++) {
    s = to_string(min(int(x[i])-'0', 9-int(x[i])+'0'));
    if (i == 0 && s=="0") ans += x[i];
    else ans += s;
  }
  cout << ans << endl;
  return 0;
}
