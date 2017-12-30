#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, k; cin >> n >> k;

  int p = 5-k, t = 0, y;
  while (n--) {
    cin >> y;
    if (y <= p) t++;
  }
  cout << t/3 << endl;

  return 0;
}
