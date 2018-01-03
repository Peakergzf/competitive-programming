#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  int a, b, c, sumA=0, sumB=0, sumC=0;

  for (int i=0; i<n; i++) cin >> a, sumA+=a;
  for (int i=0; i<n-1; i++) cin >> b, sumB+=b;
  for (int i=0; i<n-2; i++) cin >> c, sumC+=c;

  cout << (sumA-sumB) << endl;
  cout << (sumB-sumC) << endl;

  return 0;
}
