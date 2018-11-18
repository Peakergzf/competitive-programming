#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    int t; cin >> t;
    while (t--) {
        ll a, b; cin >> a >> b;
        if (a > b) cout << ">";
        else if (a < b) cout << "<";
        else cout << "=";
        cout << endl;
    }
    return 0;
} 