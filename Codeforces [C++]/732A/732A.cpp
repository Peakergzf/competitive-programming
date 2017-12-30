#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int k, r; cin >> k >> r;
  int b=k;

  int ans = 1;
  while (!(to_string(k)[to_string(k).size()-1] == '0' || to_string(k)[to_string(k).size()-1] == to_string(r)[0])) {
    ans++;
    k += b;
  }
  cout << ans << endl;

  return 0;
}
