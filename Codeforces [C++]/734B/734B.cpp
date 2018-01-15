#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int k2, k3, k5, k6; cin >> k2 >> k3 >> k5 >> k6;
  cout <<  min(k2, min(k5, k6))*256 + min(k2-min(k2, min(k5, k6)), k3)*32 << endl;

  return 0;
}
