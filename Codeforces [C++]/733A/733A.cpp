#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string s; cin >> s;
  int cur=0, ans=0;
  for (char c : s) {
    cur++;
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y') {
      ans = max(ans, cur);
      cur=0;
    }
  }
  ans = max(ans, (cur+1));
  cout << ans << endl;

  return 0;
}
