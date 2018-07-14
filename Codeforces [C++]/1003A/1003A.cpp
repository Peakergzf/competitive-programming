#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  map<int, int> freq;
  for (int i=0; i<n; i++) {
    int a; cin >> a;
    freq[a]++;
  }
  int ans = 0;
  for (auto x: freq) ans = max(ans, x.second);
  cout << ans << endl;
  
  return 0;
}
