#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  int curH, curM, preH, preM, ans=0, curAns=1;
  while (n--) {
    cin >> curH >> curM;
    if (curH==preH && curM==preM) curAns++;
    else ans=max(curAns,ans), curAns=1;
    preH=curH, preM=curM;
  }
  ans=max(curAns,ans);
  cout << ans << endl;

  return 0;
}
