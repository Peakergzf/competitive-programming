#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  vi freq(1001, 0);
  for (int i=0; i<n; i++) {
    int l; cin >> l;
    freq[l]++;
  }
  cout << *max_element(freq.begin(), freq.end()) << " " << freq.size()-count(freq.begin(), freq.end(), 0) << endl;;

  return 0;
}
