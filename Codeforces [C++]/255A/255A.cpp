#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, a; cin >> n;
  vi m(3);
  vector<string> ms = {"chest", "biceps", "back"};
  for (int i=0; i<n; i++) {
    cin >> a;
    m[i % 3] += a;
  }
  int maxM = max(max(m[0], m[1]), m[2]);
  int maxIndex = find(m.begin(), m.end(), maxM) - m.begin();
  cout << ms[maxIndex] << endl;

  return 0;
}
