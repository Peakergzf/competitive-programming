#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll n; cin >> n;
  vll b(n);
  for (int i=0; i<n; i++) cin >> b[i];
  sort(b.begin(), b.end());

  ll numMin=1, numMax=1;
  for (int i=1; i<n; i++) if (b[i] == b[0]) numMin++;
  for (int i=n-2; i>=0; i--) if (b[i]==b[n-1]) numMax++;

  cout << (b[n-1] - b[0]) << " " << ((numMax + numMin <= n)? (numMax * numMin) : (n*(n-1)/2)) << endl;

  return 0;
}
