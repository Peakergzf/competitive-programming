#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int a, p, minP=101, n;
  ll ans=0;
  cin >> n;
  while (n--) {
    cin >> a >> p;
    minP=min(p, minP);
    ans+=minP*a;
  }
  cout << ans << endl;

  return 0;
}
