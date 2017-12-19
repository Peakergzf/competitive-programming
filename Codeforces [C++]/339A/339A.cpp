#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string s, ans; cin >> s;
  int one=0, two=0, three=0;
  for (int i=0; i<(int)s.size(); i++){
    if (s[i] == '1') one++;
    if (s[i] == '2') two++;
    if (s[i] == '3') three++;
  }
  for (int i=0; i<one; i++) ans += "1+";
  for (int i=0; i<two; i++) ans += "2+";
  for (int i=0; i<three; i++) ans += "3+";
  ans = ans.substr(0, s.size());
  cout << ans << endl;
  return 0;
}
