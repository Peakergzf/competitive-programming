#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, a, b; cin >> n >> a >> b;

  int aP1 = floor(n*(a*1.0)/(a+b));
  aP1 = max(aP1, 1);
  int bP1 = n - aP1;
  bP1 = max(bP1, 1);

  int aP2 = ceil(n*(a*1.0)/(a+b));
  aP2 = max(aP2, 1);
  int bP2 = n - aP2;
  bP2 = max(bP2, 1);

  int aMin1 = floor((a*1.0)/aP1);
  int bMin1 = floor((b*1.0)/bP1);

  int aMin2 = floor((a*1.0)/aP2);
  int bMin2 = floor((b*1.0)/bP2);

  cout << max(min(aMin1, bMin1), min(aMin2, bMin2)) << endl;

  return 0;
}
