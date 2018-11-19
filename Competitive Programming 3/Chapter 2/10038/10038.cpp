#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    int N;
    while (cin >> N) {
        vector<bool> seen(N+5, false);
        seen[0] = true;

        int prev;
        for (int i = 0; i < N; i++) {
            int cur; cin >> cur;
            if (i != 0) {
                seen[abs(cur - prev)] = true;
            }
            prev = cur;
        }

        bool jolly = true;
        for (int i = 0; i < N; i++) {
            if (!seen[i]) {
                jolly = false;
            }
        }

        cout << (jolly ? "Jolly" : "Not jolly") << endl;

    }
    return 0;
} 