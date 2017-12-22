#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string s, distinct, ans="IGNORE HIM!"; cin >> s;
  for (int i=0; i<(int)s.size(); i++) if (distinct.find(s[i])==string::npos) distinct+=s[i];
  if ((int)distinct.size()%2==0) ans="CHAT WITH HER!";
  cout << ans << endl;

  return 0;
}
