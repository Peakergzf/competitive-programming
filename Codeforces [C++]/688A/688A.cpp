#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, d, conWin=0; cin >> n >> d;
  vi w;
  for (int i=0; i<d; i++) {
    string s; cin >> s;
    if (s!=string(n,'1')) conWin++;
    else {
      w.push_back(conWin);
      conWin=0;
    }
  }
  if (conWin!=0) w.push_back(conWin);
  sort(w.begin(), w.end());
  cout << w[(int)w.size()-1] << endl;

  return 0;
}
