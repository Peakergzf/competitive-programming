#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, ans, row, col;
  for (int i=1; i<=5; i++){
    for (int j=1; j<=5; j++){
      cin >> n;
      if (n==1) row=i, col=j;
    }
  }
  ans = abs(row-3)+abs(col-3);
  cout << ans << endl;

  return 0;
}
