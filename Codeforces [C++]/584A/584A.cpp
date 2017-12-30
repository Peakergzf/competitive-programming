#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, t; cin >> n >> t;

  if (t==10){
    if (n==1) cout << -1;
    else cout << '1' << string(n-1, '0');
  }
  else cout << t << string(n-1, '0');
  cout << endl;

  return 0;
}
