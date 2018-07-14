#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int a, b, x; cin >> a >> b >> x;

  string s = "";
  int zero_cnt = 0, one_cnt = 0;

  // observation:
  // for a given x, there exist pattern ..01..10..01.. (0 and 1 changes x times)
  // so we first construct sequence 01010101... if a>b or 10101010... if a<b
  // and then we insert the rest of 1s and 0s right next to any of the previous 1s and 0s in s
  // in this way it won't introduce new si != si+1

  for (int i=0; i<x+1; i++) {
    if (a > b) {
      if (i % 2 == 0) s += "0", zero_cnt++;
      else s += "1", one_cnt++;
    }
    else {
      if (i % 2 == 0) s += "1", one_cnt++;
      else s += "0", zero_cnt++;
    }
  }

  s.insert(s.find("0"), a - zero_cnt, '0');

  s.insert(s.find("1"), b - one_cnt, '1');

  cout << s << endl;

  return 0;
}
