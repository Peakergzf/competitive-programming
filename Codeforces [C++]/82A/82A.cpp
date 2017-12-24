#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll n; cin >> n;
  vector<string> names = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

  ll s=5, i=1;
  while (n > s){
    n -= s;
    s *= 2;
    i++;
  }

  int ans=n/(s/5);
  if (n%(s/5)==0) ans--;
  cout << names[ans] << endl;

  return 0;
}
