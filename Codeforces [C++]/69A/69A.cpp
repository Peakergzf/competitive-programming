#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, x, y, z, xSum=0, ySum=0, zSum=0; cin >> n;
  while (n--){
    cin >> x >> y >> z;
    xSum+=x;
    ySum+=y;
    zSum+=z;
  }
  if (xSum==0 && ySum==0 && zSum==0) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}
