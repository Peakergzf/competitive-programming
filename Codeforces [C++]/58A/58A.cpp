#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string hello="hello", s; cin >> s;
  int index=0, count=0;
  for (int i=0; i<(int)s.size(); i++) if (s[i]==hello[index]) index++, count++;
  if (count==5) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}
