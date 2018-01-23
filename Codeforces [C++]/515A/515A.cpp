#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll a, b, s; cin >> a >> b >> s;
  ll ab = abs(a)+abs(b);
  cout << (((s>=ab) && ((s-ab)%2==0))? "Yes" : "No");
  cout << endl;

  return 0;
}
