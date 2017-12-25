#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string s, ans=""; cin >> s;
  
  int lower=0, upper=0;
  for (int i=0; i<(int)s.size(); i++){
    if (isupper(s[i])) upper++;
    else lower++;
  }

  if (lower >= upper) for (int i=0; i<(int)s.size(); i++) ans += tolower(s[i]);
  else for (int i=0; i<(int)s.size(); i++) ans += toupper(s[i]);

  cout << ans << endl;

  return 0;
}
