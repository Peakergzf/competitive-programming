#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll n, m, a, ans; cin >> n >> m >> a;

  ans = ((m+a-1)/a) * ((n+a-1)/a);
  // ans = (m+a-1)/a * (n+a-1)/a;

  cout << ans << endl;

  return 0;
}
