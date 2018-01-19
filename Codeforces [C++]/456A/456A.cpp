#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  vector<pair<int, int>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end());
  int maxQ = 0;
  bool alex=false;
  for (int i=0; i<n; i++) {
    if (v[i].second >= maxQ) {
      maxQ = v[i].second;
    }
    else {
      alex=true;
      break;
    }
  }
  cout << (alex? "Happy Alex" : "Poor Alex");
  cout << endl;

  return 0;
}
