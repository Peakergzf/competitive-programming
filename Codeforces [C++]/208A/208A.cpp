#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string s; cin >> s;

  int pos = s.find("WUB");
  while (pos != string::npos){
    s.replace(pos, 3, " ");
    pos = s.find("WUB");
  }

  s.erase(0, s.find_first_not_of(" "));
  s.erase(s.find_last_not_of(" ") + 1);

  for (int i=0; i<(int)s.size(); i++){
    if (s[i]==' ' && s[i+1]==' ') s.erase(i, 1);
  }
  cout << s << endl;

  return 0;
}
