#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<char> piece = {'q', 'r', 'b', 'n', 'p', 'k'};
  vi weight = {9, 5, 3, 3, 1, 0};
  map<char, int> chess;
  for (int i=0; i<6; i++) chess[piece[i]]=weight[i];

  int w=0, b=0;
  for (int i=0; i<8; i++) {
    string s; cin >> s;
    for (char c : s) {
      if (isupper(c)) w+=chess[tolower(c)];
      if (islower(c)) b+=chess[c];
    }
  }
  if (w>b) cout << "White";
  if (b>w) cout << "Black";
  if (b==w) cout << "Draw";
  cout << endl;

  return 0;
}
