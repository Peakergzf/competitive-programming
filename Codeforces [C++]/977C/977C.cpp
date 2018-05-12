#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, k; cin >> n >> k;
  vector<ll> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end());

  ll x = -1;

  if (k == 0) { // all elements are strictly greater than x
    if (v[0] > 1) x = v[0]-1;
  }
  else if (k == n) { // all elements are less or equal to x
    x = v[n-1];
  }
  else {
    if (v[k-1] != v[k]) x = v[k-1];
  }

  cout << x << endl;

  return 0;
}
