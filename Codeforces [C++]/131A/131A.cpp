#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string s; cin >> s;
  bool flag = true;
  for (int i=1; i<(int)s.size(); i++) if(islower(s[i])) flag=false;
  if (flag) {
    for(int i=0; i<(int)s.size(); i++){
      if(isupper(s[i])) s[i]=tolower(s[i]);
      else s[i]=toupper(s[i]);
    }
  }
  cout << s << endl;

  return 0;
}
