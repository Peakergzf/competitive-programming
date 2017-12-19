#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, s, one=0, two=0, three=0, four=0; cin >> n;
  while(n--){
    cin >> s;
    switch(s){
      case 1: one++; break;
      case 2: two++; break;
      case 3: three++; break;
      case 4: four++; break;
    }
  }
  int ans = four;
  ans += two/2;
  two = two%2;
  if (two==1) {
    if (one>=2) one-=2;
    else if(one>=1) one--; ans++;
  }
  if (three>one) {
    ans += max(one, three);
  }
  else {
    if ((one-three)%4!=0) ans++;
    ans += (three+(one-three)/4);
  }
  cout << ans << endl;

  return 0;
}
