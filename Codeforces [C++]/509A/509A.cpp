#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  vi v(n);
  for (int i=0; i<n; i++) v[i]=i+1;
  for (int i=0; i<n-2; i++) for (int i=1; i<n; i++) v[i]=v[i]+v[i-1];
  cout << v[n-1] << endl;

  return 0;
}
