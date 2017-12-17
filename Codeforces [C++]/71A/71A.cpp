#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  while (n--) {
    string w; cin >> w;
    string ans = w; int len = w.size();
    if (len > 10) ans = w[0] + to_string(len-2) + w[len-1];
    cout << ans << endl;
  }

  return 0;
}
