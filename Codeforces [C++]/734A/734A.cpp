#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, countA=0, countD=0; cin >> n;
  string s, ans; cin >> s;
  for (int i=0; i<n; i++){
    if (s[i]=='A') countA++;
    else countD++;
  }
  if (countA > countD) ans="Anton";
  else if (countA < countD) ans="Danik";
  else if (countA == countD) ans="Friendship";

  cout << ans << endl;

  return 0;
}
