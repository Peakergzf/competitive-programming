#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  int cur; cin >> cur;
  int best=cur, worst=cur, ans=0;
  n--;

  while (n--) {
    cin >> cur;
    if (cur > best) ans++, best = cur;
    if (cur < worst) ans++, worst = cur;
  }

  cout << ans << endl;

  return 0;
}
