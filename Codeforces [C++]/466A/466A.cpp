#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, m, a, b, ans=0; cin >> n >> m >> a >> b;

  if (b <= a*m) {
    ans += (n/m)*b;
    if (b < a*(n%m)) ans+=b;
    else ans += (n%m)*a;
  }
  else ans = a*n;

  cout << ans << endl;

  return 0;
}
