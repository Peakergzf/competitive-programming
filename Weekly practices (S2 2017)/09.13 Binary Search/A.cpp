#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main() {
    int n, ai;
    int cum_sum = 0;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++){
        cin >> ai;
        cum_sum += ai;
        a[i] = cum_sum;
    }

    int m;
    cin >> m;
    int q;
    vector<int>::iterator low;
    for (int i = 0; i < m; i++){
        cin >> q;
        low = lower_bound(a.begin(), a.end(), q);
        cout << (low- a.begin()) + 1<< endl;
    }

    return 0;
}
