#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  string a, ans=""; cin >> a;
  vector<string> v = {"", "", "2", "3", "223", "5", "35", "7", "2227", "3327"};
  for (char c : a) ans+=v[c-'0'];
  sort(ans.begin(), ans.end());
  reverse(ans.begin(), ans.end());
  cout << ans << endl;

  return 0;
}
