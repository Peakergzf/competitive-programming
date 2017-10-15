#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
const double PI=3.14159265358979323846264338327950288;

int main(){
  int n; cin >> n;
  vi r(n);
  for(int i=0;i<n;i++) cin >> r[i];
  sort(r.begin(),r.end());
  reverse(r.begin(),r.end());
  int ans=0;
  for (int i=0;i<n;i++){
    if (i%2==0) ans+=r[i]*r[i];
    else ans-=r[i]*r[i];
  }
  cout << fixed << setprecision(10) << PI*ans << endl;
  return 0;
}
