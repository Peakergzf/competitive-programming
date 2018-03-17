#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  bool good = false;
  while (n--) {
    string name;
    int before, after;
    cin >> name >> before >> after;
    if (before >= 2400 && after > before) good = true;
  }
  cout << (good? "YES" : "NO") << endl;

  return 0;
}
