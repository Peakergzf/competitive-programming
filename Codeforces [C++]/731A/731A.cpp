#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string s; cin >> s;
  int ans=min(s[0]-'a', 'a'-s[0]+26);
  for (int i=1; i<(int)s.size(); i++) {
    char c1 = min(s[i], s[i-1]);
    char c2 = max(s[i], s[i-1]);
    ans += min(c2-c1, c1-c2+26);
  }
  cout << ans << endl;

  return 0;
}
