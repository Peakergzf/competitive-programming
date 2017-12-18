#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string p, ans="NO"; cin >> p;
  int count=1;
  for (int i=1; i<(int)p.size(); i++){
    if (p[i] == p[i-1]) count++;
    else count=1;
    if (count >= 7){
      ans="YES";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
