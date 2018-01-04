#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, m, c, mCount=0, cCount=0; cin >> n;
  while (n--) {
    cin >> m >> c;
    if (m > c) mCount++;
    if (m < c) cCount++;
  }

  if (mCount > cCount) cout << "Mishka";
  if (mCount < cCount) cout << "Chris";
  if (mCount == cCount) cout << "Friendship is magic!^^";
  cout << endl;

  return 0;
}
