#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int a, b, win=0, draw=0, lose=0; cin >> a >> b;
  for (int x=1; x<=6; x++) {
    if (abs(a-x) < abs(b-x)) win++;
    else if (abs(a-x) == abs(b-x)) draw++;
    else lose++;
  }
  cout << win << " " << draw << " " << lose << endl;

  return 0;
}
