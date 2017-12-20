#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, a, b, cur=0, ans=0; cin >> n;
  while (n--){
    cin >> a >> b;
    cur -= a;
    cur += b;
    if (cur > ans) ans=cur;
  }
  cout << ans << endl;

  return 0;
}
