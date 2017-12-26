#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, t, cur=1; cin >> n >> t;
  string ans = "NO";

  vi a(n);
  for (int i=1; i<n; i++) cin >> a[i];

  while (cur < n){
    cur = cur + a[cur];
    if (cur == t) {
      ans="YES";
      break;
    }
  }

  cout << ans << endl;

  return 0;
}
