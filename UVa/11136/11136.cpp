#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n;
  while (cin >> n && n) {
    multiset<int> m;
    ll ans = 0;

    while (n--) {
      int k; cin >> k;

      while (k--) {
        int b; cin >> b;
        m.insert(b);
      }

      multiset<int>::iterator it1 = m.begin();
      multiset<int>::iterator it2 = --m.end(); // point to "past-the-end"

      ans += (*it2 - *it1);

      m.erase(it1);
      m.erase(it2);
    }
    cout << ans << endl;
  }
  return 0;
}
