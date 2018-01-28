#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  vi v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  cout << ((find(v.begin(), v.end(), 1) != v.end())? -1 : 1);
  cout << endl;

  return 0;
}
