#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string s;
  vi freq(26, 0);
  while (cin >> s){
    for (int i=0; i<(int)s.size(); i++) {
      if (int('a') <= int(s[i]) && int(s[i]) <= int('z')) freq[int(s[i]) - int('a')]++;
    }
  }

  int ans=0;
  for (int i=0; i<26; i++) if (freq[i]>0) ans++;

  cout << ans << endl;

  return 0;
}
