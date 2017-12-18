#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string s; cin >> s;
  string v = "aeiouyAEIOUY";
  string ans = "";
  for (int i=0; i<(int)s.size(); i++){
    if (v.find(s[i]) == string::npos){
      ans += ".";
      ans += tolower(s[i]);
    }
  }
  cout << ans << endl;

  return 0;
}
