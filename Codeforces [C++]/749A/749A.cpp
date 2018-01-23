#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  cout << (n/2) << endl;
  int m=n/2-1;
  while (m--) cout << 2 << " ";
  cout << ((n%2==0)? 2 : 3);
  cout << endl;

  return 0;
}
