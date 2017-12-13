#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

int main(){
  int t; cin >> t;
  int a;

  while (t--){
    cin >> a;
    if (360%(180-a)==0) cout << "YES" << endl;
    else cout << "NO" << endl;
  }

  return 0;
}
