#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int a,b; cin >> a >> b;
  cout << ((abs(a-b)<=1)? "YES" : "NO") << endl;

  return 0;
}
