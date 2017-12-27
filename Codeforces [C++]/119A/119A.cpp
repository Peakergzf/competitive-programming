#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;


int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int a, b, n; cin >> a >> b >> n;
  bool simon = true;

  while (n > 0){
    if (simon) n -= __gcd(a, n);
    else n -= __gcd(b, n);

    simon = !simon;
  }

  int ans = (simon)? 1 : 0;
  cout << ans << endl;

  return 0;
}
