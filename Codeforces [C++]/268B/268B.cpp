#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  int ans=n;
  for (int i=0; i<n; i++) ans += (n-i)*i;
  cout << ans << endl;

  return 0;
}
