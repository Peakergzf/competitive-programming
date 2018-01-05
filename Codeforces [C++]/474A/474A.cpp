#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string LR, s; cin >> LR >> s;
  string kb = "qwertyuiopasdfghjkl;zxcvbnm,./";
  string ans = "";

  map <char, int> kbMap;
  for (int i=0; i<(int)kb.size(); i++) kbMap[kb[i]]=i;

  if (LR == "L") for (int i=0; i<(int)s.size(); i++) ans += kb[kb.find(s[i])+1];
  if (LR == "R") for (int i=0; i<(int)s.size(); i++) ans += kb[kb.find(s[i])-1];

  cout << ans << endl;

  return 0;
}
