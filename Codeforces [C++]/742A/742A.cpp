#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll n; cin >> n;
  if (n==0) cout << 1;
  else if (n%4==1) cout << 8;
  else if (n%4==2) cout << 4;
  else if (n%4==3) cout << 2;
  else if (n%4==0) cout << 6;
  cout << endl;

  return 0;
}
