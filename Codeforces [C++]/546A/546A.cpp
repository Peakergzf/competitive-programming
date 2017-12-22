#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int k, w; ll n, ans; cin >> k >> n >> w;
  int total = (1+w)*w/2*k;
  if (total>n) ans=total-n;
  else ans=0;
  cout << ans << endl;

  return 0;
}
