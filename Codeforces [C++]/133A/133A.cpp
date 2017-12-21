#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string s; cin >> s;
  if ((s.find("H")!=string::npos) || (s.find("Q")!=string::npos) || (s.find("9")!=string::npos)) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}
