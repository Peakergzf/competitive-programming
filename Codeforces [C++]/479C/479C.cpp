#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, ans=1; cin >> n;
  vector<pii> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end());
  for (int i=0; i<n; i++) ans = ((ans<=v[i].second)? v[i].second : v[i].first);
  cout << ans << endl;

  return 0;
}
