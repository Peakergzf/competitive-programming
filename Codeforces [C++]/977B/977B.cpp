#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n;
  string s;
  cin >> n >> s;
  map<string, int> freq;
  for (int i=0; i<(int)s.size()-1; i++){
    string sub = s.substr(i, 2);
    freq[sub]++;
  }
  int maxFreq = 0;
  string gram = "";
  for (const auto &x: freq){
    if (x.second > maxFreq) {
      gram = x.first;
      maxFreq = x.second;
    }
  }
  cout << gram << endl;


  return 0;
}
