#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int x;
  string of, weekMonth;
  cin >> x >> of >> weekMonth;
  if (weekMonth == "week") {
    if (x == 5 || x == 6) cout << 53;
    else cout << 52;
  }
  else if (weekMonth == "month") {
    if (x == 31) cout << 7;
    else if (x == 30) cout << 11;
    else cout << 12;
  }
  cout << endl;

  return 0;
}
