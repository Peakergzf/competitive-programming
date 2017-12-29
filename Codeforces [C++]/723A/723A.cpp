#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int x1, x2, x3; cin >> x1 >> x2 >> x3;

  cout << min((abs(x1-x3)+abs(x2-x3)), min((abs(x1-x2)+abs(x1-x3)), (abs(x1-x2)+abs(x2-x3)))) << endl;

  return 0;
}
