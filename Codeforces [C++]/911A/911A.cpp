#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  
  ll minA=10e9+1;
  vector<ll> a(n);
  for (int i=0; i<n; i++) cin >> a[i], minA = min(a[i], minA);

  vi v;
  for (int i=0; i<n; i++) if (a[i] == minA) v.push_back(i);

  int ans=10e5+1;
  for (int i=1; i<(int)v.size(); i++) ans = min(v[i]-v[i-1], ans);

  cout << ans << endl;

  return 0;
}
