#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, k; cin >> n >> k;
  vi a(n); for (int i=0; i<n; i++) cin >> a[i];

  int ans = 0;
  int left = 0, right = n-1;
  
  for (int i=0; i<n; i++) {
    if (a[left] <= k) {
      ans += 1;
      left += 1;
    }
    else if (a[right] <= k) {
      ans += 1;
      right -=1 ;
    }
    else {
      break;
    }
  }

  cout << ans << endl;
  
  return 0;
}
