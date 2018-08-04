#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; // length of the strings (max 50)
  string s, t;
  cin >> n >> s >> t;
  
  vi sFreq(26);
  vi tFreq(26);
  for (char c : s) sFreq[c-'a']++;
  for (char c : t) tFreq[c-'a']++;
  for (int i=0; i<26; i++) {
    if (sFreq[i] != tFreq[i]) {
      cout << -1 << endl;
      return 0;
    }
  }

  vi ans;
  for (int i=0; i<n; i++) {
    if (s[i] != t[i]) {
      int idx = s.find(t[i], i);
      for (int j=idx; j>i; j--) {
        ans.push_back(j);
        swap(s[j], s[j-1]);
      }
    }
  }

  if (ans.size() > 1e4) {
    cout << -1 << endl;
    return 0;
  }
  cout << ans.size() << endl;
  for (int i=0; i<(int)ans.size(); i++) {
    cout << ans[i] << " ";
  }
  cout << endl;

  return 0;
}
