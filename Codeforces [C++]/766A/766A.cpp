#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string a, b; cin >> a >> b;
  // cout << (a==b? -1 : max(a.size(), b.size())) << endl;
  if (a==b) cout << -1;
  else cout << max(a.size(), b.size());
  cout << endl;

  return 0;
}
