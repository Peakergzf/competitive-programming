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
  if (n==1 && v[0]!=0 && v[0]!=15) cout << -1;
  else if (v[n-1]==0) cout << "UP";
  else if (v[n-1]==15) cout << "DOWN";
  else if (v[n-2]<v[n-1]) cout << "UP";
  else if (v[n-2]>v[n-1]) cout << "DOWN";
  cout << endl;

  return 0;
}
