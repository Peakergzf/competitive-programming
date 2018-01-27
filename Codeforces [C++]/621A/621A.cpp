#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  ll cur, ans=0, minOdd=10e10;
  while (n--) {
    cin >> cur;
    ans += cur;
    if (cur%2!=0) minOdd=min(cur, minOdd);
  }
  if (ans%2!=0) ans-=minOdd;
  cout << ans << endl;

  return 0;
}
