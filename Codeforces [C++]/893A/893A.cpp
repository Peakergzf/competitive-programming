#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  vector<bool> p = {false, true, true, false};
  int w;
  string ans = "YES";
  while (n--){
    cin >> w;
    for (int i=1;i<=3;i++){
      if (i==w && !p[i]) ans = "NO";
    }
    for (int i=1;i<=3;i++){
      if (i!=w) p[i] =! p[i];
    }

  }
  cout << ans << endl;
  return 0;
}
