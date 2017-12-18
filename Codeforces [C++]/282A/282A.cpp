#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, ans=0; cin >> n;
  string s;
  while (n--){
    cin >> s;
    if (s[1] == '+') ans++;
    if (s[1] == '-') ans--;
  }
  cout << ans << endl;
  return 0;
}
