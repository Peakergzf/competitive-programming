#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, k; cin >> n >> k;
  // vi a(n); 
  // for(int i=0; i<n; i++) cin >> a[i];
  // vi p(n); // partial sum
  // for (int i=0; i<n; i++) p[i] = accumulate(a.begin(), a.begin()+i+1, 0);

  vi p(n); // another way to calculate partial sum
  for (int i=0;i<n;i++) {
    cin >> p[i];
    if (i) p[i] += p[i-1];
  }

  double ans = 0;

  for (int i=k; i<=n; i++) { // for each possible size of the segment
    for (int j=i-1; j<n; j++) { // for each segment of that size
      int cur_seg_sum = ((j==i-1) ? p[j] : (p[j] - p[j-i]));
      ans = max(ans, (cur_seg_sum / double(i)));
    }
  }

  cout << fixed << setprecision(15) << ans << endl;
  
  return 0;
}
