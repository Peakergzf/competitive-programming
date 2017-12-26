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
  sort(a.begin(), a.end());
  for (int i=0; i<n; i++) (i!=n-1)? cout << a[i] << " " : cout << a[i];
  cout << endl;

  return 0;
}
