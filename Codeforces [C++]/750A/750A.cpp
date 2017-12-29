#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, k; cin >> n >> k;
  int t = 4*60-k, i=0;
  while (t > 0 && i < n) {
    i++;
    t -= 5*i;
    if (t<0) i--;
  }
  cout << i << endl;

  return 0;
}
