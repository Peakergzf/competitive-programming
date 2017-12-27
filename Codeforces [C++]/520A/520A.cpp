#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  string s, ans="YES"; cin >> s;

  vi freq(26, 0);
  for (char c : s) freq[tolower(c) - 'a']++;

  for (int i=0; i<26; i++) if (freq[i]==0) ans="NO";

  cout << ans << endl;

  return 0;
}
