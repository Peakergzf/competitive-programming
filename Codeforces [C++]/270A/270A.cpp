#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int t; cin >> t;
  while (t--) {
    int a; cin >> a;
    cout << ((360%(180-a)==0)? "YES" : "NO");
    cout << endl;
  }

  return 0;
}
