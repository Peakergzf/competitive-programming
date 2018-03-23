#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, m; cin >> n >> m;
  vi v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  while (true) {
    for (int i=0; i<n; i++) {
      v[i] = max(v[i]-m,0);
      if (accumulate(v.begin(),v.end(),0)==0) {
        cout << (i+1);
        goto end;
      }
    }
  }
  end:
  cout << endl;
  return 0;
}
