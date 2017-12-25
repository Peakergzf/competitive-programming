#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int a, b; cin >> a >> b;
  int ans = a;

  while (a-a%b > 0){
    ans += a/b;
    a = a/b + a%b;
  }

  cout << ans << endl;

  return 0;
}
