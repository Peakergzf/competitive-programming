#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, v; cin >> n >> v;
  vi q;
  for (int i=0; i<n; i++) {
    int k; cin >> k;
    vi s(k);
    for (int j=0; j<k; j++) cin >> s[j];
    sort(s.begin(), s.end());
    if (v > s[0]) q.push_back(i+1);
  }
  cout << q.size() << endl;
  for (int i=0; i<(int)q.size(); i++) cout << q[i] << " ";

  return 0;
}
