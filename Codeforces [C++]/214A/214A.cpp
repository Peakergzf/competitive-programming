#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, m, ans=0; cin >> n >> m;
  for (int i=0; i<=max(n, m); i++) {
    for (int j=0; j<=max(n, m); j++) {
      if (i*i+j==n && i+j*j==m) ans++;
    }
  }
  cout << ans << endl;

  return 0;
}
