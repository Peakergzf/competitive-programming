#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n;
  while (cin >> n && n) {
    priority_queue<int, vi, greater<int>> q;

    for (int i=0; i<n; i++) {
      int num; cin >> num;
      q.push(num);
    }

    int ans = 0;
    for (int i=0; i<n-1; i++) {
      int cur = 0;
      cur += q.top(); q.pop();
      cur += q.top(); q.pop();

      q.push(cur);
      ans += cur;
    }
    cout << ans << endl;
  }

  return 0;
}
