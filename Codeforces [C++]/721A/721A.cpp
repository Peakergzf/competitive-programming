#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  string s; cin >> s;
  int curB=0, k=0;
  vi b;
  for (int i=0; i<n; i++) {
    if (s[i]=='B') curB++;
    else if (i>0 && s[i]=='W' && s[i-1]=='B') {
      k++;
      b.push_back(curB);
      curB=0;
    }
  }
  if (curB>0) {
    k++;
    b.push_back(curB);
  }
  cout << k << endl;
  if (k>0) for (int i : b) cout << i << " ";

  return 0;
}
