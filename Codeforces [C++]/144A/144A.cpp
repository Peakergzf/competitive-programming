#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, minS=101, maxS=0, minIndex, maxIndex, ans; cin >> n;
  vi a(n);
  for (int i=0; i<n; i++) {
    cin >> a[i];
    if (a[i] <= minS) minS = a[i], minIndex = i;
    if (a[i] > maxS) maxS = a[i], maxIndex = i;
  }
  ans = maxIndex + (n - 1 - minIndex);
  if (minIndex < maxIndex) ans--;
  cout << ans << endl;

  return 0;
}
