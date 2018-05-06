#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string s;
  int caseNum = 1;

  while (cin >> s) { // while (ws(cin) && getline(cin, s))
    cout << "Case " << caseNum << ":" << endl;
    caseNum++;

    vi acc(s.size(), 0); // partial sum
    int cur = 0;
    for (int i=0; i<(int)s.size(); i++) {
      cur += s[i]-'0';
      acc[i] = cur;
    }

    int n; cin >> n;
    while (n--) {
      int i, j; cin >> i >> j;
      if (i > j) swap(i, j);

      int sumI = (i? acc[i-1] : 0); // prevent accessing negative index
      int sumJ=acc[j];
      
      cout << ((sumJ-sumI==0 || sumJ-sumI==(j-i+1))? "Yes" : "No") << endl;
    }
  }

  return 0;
}
