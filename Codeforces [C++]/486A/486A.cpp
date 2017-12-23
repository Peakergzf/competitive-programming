#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  ll n; cin >> n;
  cout << ll((pow(-1,n)-1)/4-(pow(-1,n+1))*n/2) << endl;

  return 0;
}
