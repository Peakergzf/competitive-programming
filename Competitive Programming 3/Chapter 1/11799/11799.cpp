#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    int T; cin >> T;
    for (int i = 0; i < T; i++) {
        int N, c, ans = 0; cin >> N;
        for (int j = 0; j < N; j++) {
            cin >> c;
            ans = max(ans, c);
        }
        cout << "Case " << i + 1 << ": " << ans << endl; 
    }
    return 0;
}