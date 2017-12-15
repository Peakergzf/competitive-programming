#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  // int i = 1, total = 0;
  // while (true){
  //   total += ((1+i)*i)/2;
  //   if (total < n) i++;
  //   else {
  //     if (total != n) i--;
  //     break;
  //   }
  // }
  // cout << i << endl;
  int i, total;
  while (total <= n) {
    i++;
    total += ((1+i)*i)/2;
  }
  cout << i-1 << endl;

  return 0;
}
