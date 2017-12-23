// Question:
// multiple whitespaces don't matter?
// e.g.
// JKD  WBIRAQKF  YE   WV
// JKD WBIRAQKF YE WV

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string s; cin >> s;
  regex r("WUB");
  cout << regex_replace(s, r, " ") << endl;

  return 0;
}
