#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string s, t; cin >> s >> t;
  reverse(s.begin(), s.end());
  if (s==t) cout << "YES";
  else cout << "NO";
  cout << endl;

  return 0;
}
