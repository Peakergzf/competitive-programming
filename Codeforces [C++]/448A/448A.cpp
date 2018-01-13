#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi a(3), b(3);
  int aSum=0, bSum=0;
  for (int i=0; i<3; i++) cin >> a[i], aSum+=a[i];
  for (int i=0; i<3; i++) cin >> b[i], bSum+=b[i];
  int n, s=0; cin >> n;
  if (aSum%5==0) s+=aSum/5;
  else s+=aSum/5+1;
  if (bSum%10==0) s+=bSum/10;
  else s+=bSum/10+1;
  cout << ((s<=n)? "YES" : "NO");
  cout << endl;

  return 0;
}
