#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll n; cin >> n;
  ll ans=0, i=1;
  while (n > 0) {
    ll nextLvl = 9;
    for (int j=0; j<i-1; j++) nextLvl *= 10;
    if (n > nextLvl) {
      ans += nextLvl*i;
      n -= nextLvl;
    }
    else {
      ans += n*i;
      n = 0;
    }
    i++;
  }
  cout << ans << endl;

  return 0;
}
