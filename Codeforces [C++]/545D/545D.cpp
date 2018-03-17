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
  sort(v.begin(), v.end());
  int ans=0, totalTime=0;
  for (int i=0; i<n; i++) {
    if (v[i] >= totalTime) {
      ans++;
      totalTime += v[i];
    }
  }
  cout << ans << endl;

  return 0;
}
