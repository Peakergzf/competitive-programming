#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int N; cin >> N;
    while (N--) {
        int S, D; cin >> S >> D;
        if ((S + D) % 2 != 0 || S < D) {
            cout << "impossible" << endl;
            continue;
        }
        cout << (S + D) / 2 << " " << (S - D) / 2 << endl;
    }

    return 0;
}