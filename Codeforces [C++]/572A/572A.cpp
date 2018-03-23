#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int nA, nB; cin >> nA >> nB;
  int k, m; cin >> k >> m;
  vector<ll> vA(nA), vB(nB);
  for (int i=0; i<nA; i++) cin >> vA[i];
  for (int i=0; i<nB; i++) cin >> vB[i];

  cout << ((vA[k-1] < vB[nB-m])? "YES" : "NO") << endl;

  return 0;
}
