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
  int total = accumulate(a.begin(),a.end(),0);
  int remain = total/2, current=0;
  sort(a.rbegin(), a.rend());
  for (int i=0; i<n; i++) {
    current+=a[i];
    if (current > remain) {
      cout << i+1 << endl;
      break;
    }
  }


  return 0;
}
