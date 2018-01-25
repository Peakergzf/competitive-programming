#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  vi a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  int sum = accumulate(a.begin(), a.end(), 0);
  int subSum = sum/(n/2);

  for (int j=0; j<n; j++){
    if (a[j]>0) {
      cout << (j+1) << " ";
      int cur = a[j];
      a[j]=-1;
      for (int i=0; i<n; i++) {
        if (a[i]>0 && a[i]+cur==subSum) {
          cout << (i+1) << endl;
          a[i] = -1;
          break;
        }
      }
    }
  }

  return 0;
}
