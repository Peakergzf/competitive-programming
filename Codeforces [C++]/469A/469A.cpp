#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, p, q, x; cin >> n;
  vi a(n, 0);

  cin >> p;
  while (p--) cin >> x, a[x-1]=1;
  cin >> q;
  while (q--) cin >> x, a[x-1]=1;

  string ans = (accumulate(a.begin(), a.end(), 0) == n)? "I become the guy." : "Oh, my keyboard!";
  cout << ans << endl;

  return 0;
}
