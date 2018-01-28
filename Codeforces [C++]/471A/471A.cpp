#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi v(10);
  for (int j=0; j<6; j++) {
    int i;
    cin >> i;
    v[i]++;
  }
  sort(v.rbegin(), v.rend());
  if ((v[0]==4 && v[1]==2) ||  v[0]==6) cout << "Elephant";
  else if ((v[0]==4 && v[1]==1 && v[2]==1) || (v[0]==5 && v[1]==1)) cout << "Bear";
  else cout << "Alien";
  cout << endl;

  return 0;
}
