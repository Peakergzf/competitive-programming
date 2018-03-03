#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, m, z; cin >> n >> m >> z;
  vi v(z+1);
  for (int i=1; i<z+1; i++) {
    if (i*n<=z) v[i*n]++;
    if (i*m<=z) v[i*m]++;
  }
  int ans=0;
  for (int i=1; i<z+1; i++) if (v[i]==2) ans++;
  // for (int i=0; i<=z; i++) if (i%n==0 && i%m==0) ans++;
  cout << ans << endl;

  return 0;
}
