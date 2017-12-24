#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, m, ans=1; cin >> n >> m;

  while (n>0){
    n--;
    if (ans % m == 0) n++;
    ans++;
  }
  cout << ans-1 << endl;

  return 0;
}
