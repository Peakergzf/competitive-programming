#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string g, h, p, s, ans="YES"; cin >> g >> h >> p;
  s = g + h;
  vi freqS(26, 0);
  vi freqP(26, 0);

  for (int i=0; i<(int)s.size(); i++) freqS[int(s[i])-int('A')]++;
  for (int i=0; i<(int)p.size(); i++) freqP[int(p[i])-int('A')]++;

  for (int i=0; i<26; i++) if (freqS[i]!=freqP[i]) ans="NO";

  cout << ans << endl;

  return 0;
}
