#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, m=0; cin >> n;
  string s; cin >> s;
  for (char c : s) if (c == '0') m++;
  cout << abs(n-m-m) << endl;

  return 0;
}
