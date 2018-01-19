#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  map<string, int> p = {{"Tetrahedron", 4}, {"Cube", 6}, {"Octahedron", 8}, {"Dodecahedron", 12}, {"Icosahedron", 20}};
  int n, ans=0; cin >> n;
  string s;
  while (n--) {
    cin >> s;
    ans += p[s];
  }
  cout << ans << endl;

  return 0;
}
