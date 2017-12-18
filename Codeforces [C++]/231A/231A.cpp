#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, ans=0, p, v, t; cin >> n;
  while (n--){
    cin >> p >> v >> t;
    if (p+v+t >= 2) ans++;
  }
  cout << ans << endl;

  return 0;
}
