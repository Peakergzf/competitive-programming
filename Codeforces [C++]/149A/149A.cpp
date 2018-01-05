#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int k, acc=0; cin >> k;
  vi v(12);
  for (int i=0; i<12; i++) cin >> v[i];
  sort(v.rbegin(), v.rend());
  int i;
  for (i=0; i<12; i++) {
    if (acc>=k) break;
    acc+=v[i];
  }

  cout << ((acc<k)? -1 : i);
  cout << endl;

  return 0;
}
