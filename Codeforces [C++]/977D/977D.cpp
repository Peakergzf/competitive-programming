#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int cnt(ll x, int f){
  int ans = 0;
  while (x > 0 && x % f == 0){
    ans++;
    x /= f;
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  vector<ll> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end(), [](ll x, ll y){// within []: & copy reference everything, or add mutable after ()
    return cnt(x, 3) > cnt(y, 3) or
    ((cnt(x,3) == cnt(y,3)) and (cnt(x,2) < cnt(y,2)));
  });

  for (int i=0; i<n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}
