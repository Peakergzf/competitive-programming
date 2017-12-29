#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  string hate = "I hate that ";
  string hateEnd = "I hate it";
  string love = "I love that ";
  string loveEnd = "I love it";

  for (int i=0; i<n; i++){
    if (i%2 == 0){
      if (i == n-1) cout << hateEnd;
      else cout << hate;
    }
    else {
      if (i == n-1) cout << loveEnd;
      else cout << love;
    }
  }
  cout << endl;

  return 0;
}
