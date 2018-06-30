#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int k; cin >> k;
  map<int, vector<pii>> mp;
  // key: sum without a number
  // value: pair<seq_id, elem_id>
  
  for (int j=0; j<k; j++) {
    int n; cin >> n;
    vi a(n);

    for (int i=0; i<n; i++)
      cin >> a[i];

    int sum = accumulate(a.begin(), a.end(), 0);

    set<int> seen;
    for (int i=0; i<n; i++) {
      if (!seen.count(sum - a[i]))
        mp[sum - a[i]].push_back({j, i});
      seen.insert(sum-a[i]);
    }

  }

  for (auto p: mp) {
    vector<pii> vpi = p.second;
    if (vpi.size() >= 2) {
      cout << "YES" << endl;
      cout << vpi[0].first + 1 << " " << vpi[0].second + 1 << endl;
      cout << vpi[1].first + 1 << " " << vpi[1].second + 1 << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  
  return 0;
}
