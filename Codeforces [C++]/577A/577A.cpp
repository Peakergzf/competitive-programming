#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; ll x, ans=0; cin >> n >> x;

  for (int i=1; i<=n; i++) if (x%i==0 && x/i<=n) ans++;

  cout << ans << endl;

  return 0;
}
