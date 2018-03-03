#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll a, b, c; cin >> a >> b >> c;
  bool yes = false;
  bool diffDir = ((a<b && c<0) || (a>b && c>0));
  if (c==0) {
    if (a==b) yes=true;
  }
  else if (((b-a)%c==0) && !(diffDir)) yes=true;
  cout << (yes? "YES":"NO") << endl;

  return 0;
}
