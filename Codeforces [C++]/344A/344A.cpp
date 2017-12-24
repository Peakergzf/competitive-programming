#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, ans=1; cin >> n;
  string pre, cur;
  cin >> pre;
  for (int i=0; i<n-1; i++){
    cin >> cur;
    if (cur != pre) pre = cur, ans++;
  }
  cout << ans << endl;

  return 0;
}
