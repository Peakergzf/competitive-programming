#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi a = {5, 4, 3, 2, 1};
  int x, ans = 0, i = 0; cin >> x;
  while (x > 0){
    if (x >= a[i]){
      ans += x / a[i];
      x = x % a[i];
    }
    i++;
  }
  cout << ans << endl;

  return 0;
}
