#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, m; cin >> n >> m;
  string s;
  bool color=false;
  for (int i=0; i<n; i++){
    for (int j=0; j<m; j++){
      cin >> s;
      if (!(s == "B" || s == "W" || s == "G")) color=true;
    }
  }
  cout << (color? "#Color" : "#Black&White");
  cout << endl;

  return 0;
}
