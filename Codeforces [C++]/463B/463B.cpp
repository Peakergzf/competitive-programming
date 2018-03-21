#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, ans=0, energy=0, preH=0; cin >> n;

  while (n--) {
    int curH; cin >> curH;
    energy += (preH - curH);
    if (energy<0) {
      ans += (0-energy);
      energy = 0;
    }
    preH = curH;
  }
  cout << ans << endl;

  return 0;
}
