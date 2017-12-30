#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, ans=0; cin >> n;
  string s1, s2; cin >> s1 >> s2;

  for (int i=0; i<n; i++) ans += min(abs(s1[i]-s2[i]), 10 - abs(s1[i]-s2[i]));
  
  cout << ans << endl;

  return 0;
}
