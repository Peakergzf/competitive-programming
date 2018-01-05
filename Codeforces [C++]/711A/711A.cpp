#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  string s;
  vector<string> vs;
  bool possible = false;

  for (int i=0; i<n; i++) {
    cin >> s;
    if (!possible && s[0] == 'O' && s[1] == 'O') {
      possible = true;
      s[0] = '+';
      s[1] = '+';
    }
    else if (!possible && s[3]=='O' && s[4]=='O') {
      possible = true;
      s[3] = '+';
      s[4] = '+';
    }
    vs.push_back(s);
  }

  if (possible) {
    cout << "YES" << endl;
    for (int i=0; i<n; i++) cout << vs[i] << endl;
  }
  else cout << "NO" << endl;

  return 0;
}
