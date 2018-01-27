#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, a, b; cin >> n >> a >> b;
  cout << min(n-a, b+1) << endl;

  return 0;
}
