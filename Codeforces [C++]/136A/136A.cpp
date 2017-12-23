#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, index; cin >> n;
  vi p(n);
  for (int i=1; i<=n; i++){
    cin >> index;
    p[index-1] = i;
  }
  for (int i=0; i<n; i++){
    if (i==n-1) cout << p[i];
    else cout << p[i] << " ";
  }
  cout << endl;

  return 0;
}
