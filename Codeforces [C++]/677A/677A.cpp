#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, h, a, ans=0; cin >> n >> h;

  while (n--) {
    cin >> a;
    if (a > h) ans += 2;
    else ans++;
  }
  cout << ans << endl;

  return 0;
}
