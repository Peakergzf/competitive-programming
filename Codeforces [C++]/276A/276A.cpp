#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll n, k; cin >> n >> k;
  ll maxjoy;
  for (int i=0; i<n; i++) {
    ll f, t, joy; cin >> f >> t;
    if (t > k) joy = f-(t-k);
    else joy = f;

    if (i==0) maxjoy = joy;
    else maxjoy = max(maxjoy, joy);
  }
  cout << maxjoy << endl;

  return 0;
}
