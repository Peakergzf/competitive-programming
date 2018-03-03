#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, k; cin >> n >> k;
  int a, res=0, ans=-1;
  for (int i=0; i<n; i++) {
    cin >> a;
    res += a;
    k -= min(res,8);
    res -= min(res,8);
    if (k<=0) {
      ans=i+1;
      break;
    }
  }
  cout << ans << endl;

  return 0;
}
