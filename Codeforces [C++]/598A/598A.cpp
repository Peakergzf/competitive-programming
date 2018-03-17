#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int t; cin >> t;
  while (t--) {
    ll n; cin >> n;

    // (k+1)th number in the geo sequence,
    // which is the largest one smaller than n

    // method 1
    // int k = floor(log(n)/log(2));

    // method 2
    // vi v2(n); // base 2
    // v2[0] = -1;
    // v2[1] = 0;
    // for (int i=2; i<=n; i++) v2[i] = v2[i/2] + 1;
    // int k = v2[n];

    // method 3
    int k = 0;
    ll m = n;
    while (m > 1) {
      m /= 2;
      k++;
    }

    ll sumGeo = (1LL << (k+1)) -1;
    ll sumAri = (((1+n)*n) >> 1);
    cout << sumAri-2*sumGeo << endl;
  }

  return 0;
}
