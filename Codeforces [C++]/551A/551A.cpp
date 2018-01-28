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
  for (int i=0; i<n; i++) {
    int ans=0;
    for (int j=0; j<n; j++) if (v[j]>v[i]) ans++;
    cout << (ans+1);
    if (i!=n-1) cout << " ";
  }

  return 0;
}
