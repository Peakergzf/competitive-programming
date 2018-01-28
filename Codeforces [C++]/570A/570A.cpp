#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, m; cin >> n >> m;
  vi sec(n);
  for (int i=0; i<m; i++) {
    ll maxA=-1;
    int maxIndex=0;
    for (int j=0; j<n; j++) {
      ll a; cin >> a;
      if (a>maxA) {
        maxA=a;
        maxIndex=j;
      }
    }
    sec[maxIndex]++;
  }
  int ans=-1, maxSec=-1;
  for (int i=0; i<n; i++) {
    if (sec[i]>maxSec) {
      maxSec=sec[i];
      ans=i+1;
    }
  }
  cout << ans << endl;

  return 0;
}
