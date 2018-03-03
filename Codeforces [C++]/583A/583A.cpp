#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  vi hor(n);
  vi ver(n);
  for (int i=0; i<n*n; i++) {
    int h, v; cin >> h >> v;
    if (hor[h-1]==0 && ver[v-1]==0) {
      cout << (i+1) << " ";
      hor[h-1]++;
      ver[v-1]++;
    }
  }

  return 0;
}
