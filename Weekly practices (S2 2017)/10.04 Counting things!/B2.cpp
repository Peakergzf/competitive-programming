#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  int n; cin >> n;

  ll ans = 1;
  for (int i=0; i<5; i++){
    ans= ans*(n-i);
  }
  ans= ans/120;
  for (int i=0; i<5; i++){
    ans= ans*(n-i);
  }

  cout << ans << endl;

  return 0;
}
