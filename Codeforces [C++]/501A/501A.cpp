#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int points(int p, int t) {
  return max(75*p, 250*p-p*t);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int a, b, c, d; cin >> a >> b >> c >> d;

  if (points(a,c) > points(b,d)) cout << "Misha";
  else if (points(a,c) < points(b,d)) cout << "Vasya";
  else cout << "Tie";
  cout << endl;

  return 0;
}
