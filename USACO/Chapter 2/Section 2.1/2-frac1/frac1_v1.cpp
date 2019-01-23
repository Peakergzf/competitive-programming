/*
TASK: frac1
LANG: C++                 
*/

// https://en.wikipedia.org/wiki/Farey_sequence#Next_term

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;


int main() {
    // freopen("frac1.in", "r", stdin);
    // freopen("frac1.out", "w", stdout);

    int N; cin >> N;

    int a = 0, b = 1, c = 1, d = N;

    cout << a << "/" << b << endl;
    while (c <= N) {
        int k = (N + b) / d;
        int _a = a, _b = b, _c = c, _d = d; // make a copy
        a = _c, b = _d;
        c = k * _c - _a, d = k * _d - _b;
        cout << a << "/" << b << endl;
    }

    return 0;
}