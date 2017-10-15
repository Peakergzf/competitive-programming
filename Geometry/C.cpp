#include <bits/stdc++.h>
using namespace std;

const double pi=acos(-1);
const double EPS=1e-9;

int main(){
  int d,h,v,e; cin >> d >> h >> v >> e;
  if (d*d*pi*e+EPS > 4*v)
    cout << "NO" << endl;
  else {
    cout << "YES" << endl;
    cout << fixed << setprecision(12) << (d*d*pi*h)/(4*v-d*d*pi*e) << endl;
  }
  return 0;
}
