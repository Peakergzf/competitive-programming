#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string m, n, ans; cin >> m >> n;
  for (int i=0; i<(int)m.size(); i++){
    if (m[i] == n[i]) ans += '0';
    else ans += '1';
  }
  cout << ans << endl;

  return 0;
}
