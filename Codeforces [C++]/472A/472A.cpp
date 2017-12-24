#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool isComposite(int n){
  for (int a=2; a*a<=n; a++) if(n%a==0) return true;
  return false;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  for (int i=4; i<n; i++) {
    if (isComposite(i) && isComposite(n-i)) {
      cout << i << " " << n-i << endl;
      break;
    }
  }

  return 0;
}
