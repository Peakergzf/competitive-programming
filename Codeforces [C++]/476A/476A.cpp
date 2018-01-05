#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, m; cin >> n >> m;
  bool possible=false;
  for (int i=ceil(n/2.0); i<=n; i++) {
    if (i%m==0) {
      possible=true;
      cout << i << endl; 
      break;
    }
  }
  if (!possible) cout << -1 << endl;

  return 0;
}
