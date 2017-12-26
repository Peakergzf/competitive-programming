#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, ans=0, h, a; cin >> n;

  vector<pii> v;
  for (int i=0; i<n; i++) cin >> h >> a, v.push_back(make_pair(h, a));

  for (int i=0; i<n; i++) for (int j=0; j<n; j++) if (i != j && v[i].first == v[j].second) ans++;

  cout << ans << endl;


  return 0;
}
