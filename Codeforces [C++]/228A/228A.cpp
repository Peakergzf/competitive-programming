#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll x;
  vector<ll> s(4);
  int ans=0;
  for (int i=0; i<4; i++) {
    cin >> x;
    if(find(s.begin(), s.end(), x) != s.end()) ans++;
    s[i] = x;
  }
  cout << ans << endl;

  return 0;
}
