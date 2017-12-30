#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  map<string, int> m;
  string s;

  while(n--) {
    cin >> s;
    if (m.count(s) > 0) {
      cout << s << m[s]++ << endl;
    }
    else {
      cout << "OK" << endl;
      m[s]++;
    }
  }

  return 0;
}
