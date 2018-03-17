#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int Y, W, D; cin >> Y >> W;
  D = 6 - max(Y, W) + 1;
  cout << D/__gcd(D, 6) << "/" << 6/__gcd(D, 6) << endl;

  return 0;
}
