#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  vector<ll> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end());
  bool can = false;
  for (int i=0; i<n-2; i++) if (v[i] + v[i+1] > v[i+2]) can = true;
  cout << (can? "YES" : "NO") << endl;

  return 0;
}
