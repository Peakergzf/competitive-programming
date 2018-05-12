#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll n;
  int k;
  cin >> n >> k;
  for (int i=0; i<k; i++){
    if (n%10==0) n/=10;
    else n--;
  }
  cout << n << endl;

  return 0;
}
