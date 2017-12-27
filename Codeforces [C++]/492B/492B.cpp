#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; ll l; cin >> n >> l;

  vector<ll> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  ll maxDiff = max(a[0]*2, (l-a[n-1])*2);
  for (int i=1; i<n; i++) maxDiff = max(a[i]-a[i-1], maxDiff);

  cout << fixed << setprecision(10) << maxDiff*0.5 << endl;

  return 0;
}
