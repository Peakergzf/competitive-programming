#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  ll xi;
  vll x(n), sx(n), minD(n), maxD(n);
  for (int i=0; i<n; i++) {
    cin >> xi;
    x[i] = xi;
    sx[i] = xi; // sorted x
  }
  sort(sx.begin(), sx.end());

  for (int i=0; i<n; i++) {
    int pos = find(x.begin(), x.end(), sx[i]) - x.begin();
    if (i==0) {
      minD[pos] = sx[i+1]-sx[i];
      maxD[pos] = sx[n-1]-sx[i];
    }
    else if (i==n-1) {
      minD[pos] = sx[i]-sx[i-1];
      maxD[pos] = sx[i]-sx[0];
    }
    else {
      minD[pos] = min((sx[i]-sx[i-1]), (sx[i+1]-sx[i]));
      maxD[pos] = max((sx[i]-sx[0]), (sx[n-1]-sx[i]));
    }
  }

  for (int i=0; i<n; i++) cout << minD[i] << " " << maxD[i] << endl;

  return 0;
}
