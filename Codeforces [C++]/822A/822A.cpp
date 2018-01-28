#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll factorial (int n) {
  ll fac=1;
  for (int i=1; i<=n; i++) fac*=i;
  return fac;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll A, B; cin >> A >> B;
  cout << factorial(min(A,B)) << endl;

  return 0;
}
