#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int s, n, x, y; cin >> s >> n;

  vector<pii> v;
  for (int i=0; i<n; i++) cin >> x >> y, v.push_back(make_pair(x, y));
  sort(v.begin(), v.end());

  string ans="YES";
  for (int i=0; i<n; i++){
    if (s <= v[i].first) ans = "NO";
    else s += v[i].second;
  }

  cout << ans << endl;

  return 0;
}
