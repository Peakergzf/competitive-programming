#include <bits/stdc++.h>
using namespace std;

string alphabet = "ZABCDEFGHIJKLMNOPQRSTUVWXYZ";

bool isRXCY(string s) {
  bool hasR=false, hasC=false;
  int upper=0;
  for (char c : s) {
    if (isupper(c)) upper++;
    if (c=='R') hasR=true;
    if (c=='C') hasC=true;
  }
  return (isdigit(s[1]) && upper==2 && hasR && hasC);
}

int ipow(int base, int exp) {
  // https://stackoverflow.com/a/101613
  int result = 1;
  while (exp) {
    if (exp & 1) result *= base;
    exp >>= 1;
    base *= base;
  }
  return result;
}

void rxcyToCol(string s) {
  int i=1;
  string stringR="", stringC="";
  while (isdigit(s[i])) {
    stringR+=s[i];
    i++;
  }
  i++;
  while (isdigit(s[i])) {
    stringC+=s[i];
    i++;
  }
  int intC = stoi(stringC);
  string col = "";
  while (intC!=0) {
    col += alphabet[intC%26];
    if (intC%26==0) {
      intC=intC/26;
      intC--;
    }
    else intC=intC/26;
  }
  reverse(col.begin(), col.end());

  cout << col << stringR << endl;
}

void colToRxcy(string s) {
  string stringR="", stringC="";
  for (int i=0; i<(int)s.size(); i++) {
    if (isupper(s[i])) stringC+=s[i];
    else stringR+=s[i];
  }
  cout << "R" << stringR << "C";
  int intC=0, j=0;
  for (int i=stringC.size()-1; i>=0; i--) {
    intC+=(stringC[i]-'@')*ipow(26,j);
    j++;
  }
  cout << intC << endl;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  while (n--) {
    string s; cin >> s;
    if (isRXCY(s)) rxcyToCol(s);
    else colToRxcy(s);
  }

  return 0;
}
