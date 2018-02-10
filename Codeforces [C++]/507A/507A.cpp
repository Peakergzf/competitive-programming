#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, k; cin >> n >> k;
  vector<pii> v(n);
  for (int i=0; i<n; i++) {
    cin >> v[i].first;
    v[i].second = i+1;
  }
  sort(v.begin(), v.end());
  int m=0, acc=0;
  vi ans;
  for (int i=0; i<n; i++) {
    acc += v[i].first;
    if (acc<=k) {
      ans.push_back(v[i].second);
      m++;
    }
    else break;
  }
  cout << m << endl;
  for (int i=0; i<m; i++) {
    cout << ans[i];
    if (i!=m) cout << " ";
  }
  cout << endl;

  return 0;
}
