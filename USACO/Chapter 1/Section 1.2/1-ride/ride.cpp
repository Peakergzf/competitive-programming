/*
TASK: ride
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");

    string s1, s2;
    fin >> s1 >> s2;

    int n1 = 1, n2 = 1;
    for (char c : s1) n1 *= c - 'A' + 1;
    for (char c : s2) n2 *= c - 'A' + 1;

    if (n1 % 47 == n2 % 47) fout << "GO";
    else fout << "STAY";
    fout << endl;

    return 0;
}