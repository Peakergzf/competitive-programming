#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    ll n; cin >> n;
    while (n >= 10) {
        ll m = 0;
        for (char c : to_string(n)) m += c - '0';
        n = m;
    }
    cout << n << endl;
    return 0;
}