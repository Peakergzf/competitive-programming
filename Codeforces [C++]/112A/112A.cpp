#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  string s1, s2; cin >> s1; cin >> s2;
  transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
  transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
  if (s1<s2) cout << "-1" << endl;
  if (s1>s2) cout << "1" << endl;
  if (s1==s2) cout << "0" << endl;
  return 0;
}
