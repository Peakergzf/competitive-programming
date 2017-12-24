#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, m; cin >> n >> m;
  string ans = (min(n, m) % 2 == 0)? "Malvika" : "Akshat";
  cout << ans << endl;

  return 0;
}
