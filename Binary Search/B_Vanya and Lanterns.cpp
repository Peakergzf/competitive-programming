#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main() {
    int n, l; cin >> n >> l;
    vi a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    vi b(n+1);
    b[0] = (a[0] - 0)*2;
    b[n] = (l - a[n - 1])*2;

    for (int i = 1; i < n; i++){
        b[i] = a[i] - a[i - 1];
    }
    sort(b.begin(), b.end());

    cout << fixed << setprecision(10) << b[n]/2.0 << endl;

    return 0;
}
