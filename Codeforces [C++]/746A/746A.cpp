#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int a, b, c; cin >> a >> b >> c;
  cout << 7 * min(min(a, b/2),c/4) << endl;

  return 0;
}
