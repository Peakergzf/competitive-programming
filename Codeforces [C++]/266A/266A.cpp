#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  string s; cin >> s;
  int ans = 0;
  for (int i=1;i<n;i++) if (s[i]==s[i-1]) ans++;
  cout << ans << endl;
  return 0;
}
