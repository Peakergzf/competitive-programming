#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, a, b, ans; cin >> n >> a >> b;
  ans = (a+b%n)%n;
  if (ans==0) ans=n;
  else if (ans<0) ans+=n;
  cout << ans << endl;

  return 0;
}
