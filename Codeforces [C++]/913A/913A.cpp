#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int ipow(int base, int exp) {
  // https://stackoverflow.com/a/101613
  int result = 1;
  while (exp) {
    if (exp & 1) result *= base;
    exp >>= 1;
    base *= base;
  }
  return result;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll n, m; cin >> n >> m;
  int mExp = 1;
  while (ipow(2,mExp)<=m) mExp++;
  if (mExp < n) cout << m << endl;
  else cout << (m%ipow(2,n)) << endl;

  return 0;
}
