#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, t; cin >> n >> t;
  string s; cin >> s;
  while(t--){
    string temp = "";
    int i=0;
    while(i<n){
      if (s[i]=='B' && s[i+1]=='G') temp+="GB", i+=2;
      else temp+=s[i], i++;
    }
    s = temp;
  }
  cout << s << endl;

  return 0;
}
