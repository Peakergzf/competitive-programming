#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<string> vs = {"114", "141", "414", "411", "111", "144", "441"};
  vector<string> vs2 = {"141", "114", "144", "111"};
  string s; cin >> s;
  bool yes = true;
  int len = s.size();
  if (len == 1) {
    if (s!="1") yes=false;
  }
  else if (len == 2) {
    if (!(s=="14"||s=="11")) yes=false;
  }
  else if (len == 3) {
    if (find(vs2.begin(),vs2.end(),s)==vs2.end()) yes=false;
  }
  else {
    for (int i=0; i<len-2; i++){
      string sub = s.substr(i,3);
      if (i==0) {
        if (find(vs2.begin(),vs2.end(),sub)==vs2.end()) yes=false;
      }
      else {
        if (find(vs.begin(),vs.end(),sub)==vs.end()) yes=false;
      }
    }
  }
  cout << (yes? "YES" : "NO") << endl;

  return 0;
}
