#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string s; cin >> s;
  int diff=0;
  int len = s.size();
  for (int i=0; i<len/2; i++) {
    if (s[i] != s[len-1-i]) diff++;
  }
  cout << ((diff==1 || (diff==0 && len%2==1))? "YES" : "NO") << endl;

  return 0;
}
