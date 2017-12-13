#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

int main() {
  int N; cin >> N;

  vvll choose(N+1, vll(N+1, 0));
  for (int i=0;i<N+1;i++){
    choose[i][0] = 1;
    choose[i][i] = 1;
    for (int j=1;j<i;j++){
      choose[i][j] = choose[i-1][j-1] + choose[i-1][j];
    }
  }

  cout << choose[N][5] + choose[N][6] + choose[N][7] << endl;

  return 0;
}