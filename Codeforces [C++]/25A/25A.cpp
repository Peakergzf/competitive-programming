#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, a, ans; cin >> n;
  vi even, odd;
  for (int i=1; i<=n; i++){
    cin >> a;
    if (a%2==0) even.push_back(i);
    else odd.push_back(i);
  }
  ans = (even.size() < odd.size())? even[0] : odd[0];
  cout << ans << endl;

  return 0;
}
