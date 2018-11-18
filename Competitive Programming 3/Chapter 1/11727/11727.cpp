#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    int T; cin >> T;
    for (int i = 0; i < T; i++) {
        vi v(3);
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        cout << "Case " << i + 1 << ": " << v[1] << endl; 
    }
    return 0;
}