#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, b; cin >> n;
  map<int, int> billFreq;
  billFreq[25]=0;
  billFreq[50]=0;
  billFreq[100]=0;
  bool yes=true;
  while (n--) {
    cin >> b;
    billFreq[b]++;
    if (b==50){
      if (billFreq[25]>=1) billFreq[25]--;
      else yes=false;
    }
    if (b==100) {
      if (billFreq[25]>=1 && billFreq[50]>=1) billFreq[25]--, billFreq[50]--;
      else if (billFreq[25]>=3) billFreq[25]-=3;
      else yes=false;
    }
  }
  cout << (yes? "YES" : "NO");
  cout << endl;

  return 0;
}
