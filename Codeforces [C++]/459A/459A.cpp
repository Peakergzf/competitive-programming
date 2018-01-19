#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int x1, x2, y1, y2, a; cin >> x1 >> y1 >> x2 >> y2;
  if (x1 == x2) {
    a = abs(y1 - y2);
    cout << (x1 + a) << " " << y1 << " " << (x2 + a) << " " << y2 << endl;
  }
  else if (y1 == y2) {
    a = abs(x1 - x2);
    cout << x1 << " " << (y1 + a) << " " << x2 << " " << (y2 + a) << endl;
  }
  else if (abs(x1 - x2) == abs(y1 - y2)){
    cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
  }
  else {
    cout << -1 << endl;
  }

  return 0;
}
