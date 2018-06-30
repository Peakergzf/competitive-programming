#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  string s; cin >> s;


  for (int d=1; d<=n; d++) {
    if (n % d == 0) {
      // string sub_str = s.substr(0, d);
      // reverse(sub_str.begin(), sub_str.end());
      // s = sub_str + s.substr(d);

      reverse(s.begin(), s.begin()+d);
    }
  }
  
  cout << s << endl;
  
  return 0;
}
