#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; // n songs
  ll cap; // max cap
  cin >> n >> cap;
  vll a(n), b(n), diff(n);
  for (int i=0; i<n; i++) {
    cin >> a[i] >> b[i];
    diff[i] = a[i] - b[i];
  }
  ll sumA = accumulate(a.begin(), a.end(), 0LL);
  ll sumB = accumulate(b.begin(), b.end(), 0LL);
  if (sumA <= cap) {
    cout << 0 << endl;
    return 0;
  }
  if (sumB > cap) {
    cout << -1 << endl;
    return 0;
  }
  ll goal = sumA - cap; // total need to be compressed
  sort(diff.rbegin(), diff.rend());
  ll cur = 0;
  int ans = 0;
  for (int i=0; i<n; i++) {
    cur += diff[i];
    ans += 1;
    if (cur >= goal) {
      cout << ans << endl;
      return 0;
    }
  }
  
  return 0;
}
