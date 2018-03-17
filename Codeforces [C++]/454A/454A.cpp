#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  for (int i=1; i<=n; i++) {
    if (i <= n/2) cout << string(n/2-i+1, '*') << string(i*2-1, 'D') << string(n/2-i+1, '*') << endl;
    else if (i == n/2 + 1) cout << string(n, 'D') << endl;
    else cout << string(n/2-(n-i), '*') << string((n-i+1)*2-1,'D') << string(n/2-(n-i), '*') << endl;
  }

  return 0;
}
