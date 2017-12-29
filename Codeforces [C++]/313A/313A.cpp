#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll n, ans; cin >> n;
  ans = n;
  if (n<0){
    string s = to_string(n);
    string s1 = s.substr(0, s.size()-1), s2 = s.substr(0, s.size()-2)+s[s.size()-1];
    ans = max(stoi(s1), stoi(s2));
  }

  cout << ans << endl;

  return 0;
}
