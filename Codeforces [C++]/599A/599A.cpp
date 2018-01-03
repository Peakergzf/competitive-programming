#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int d1, d2, d3; cin >> d1 >> d2 >> d3;
  cout << min(d1+d2+d3, min((d1+d2)*2, min((d2+d3)*2, (d1+d3)*2))) << endl;

  return 0;
}
