#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    int K;
    while (cin >> K, K) {
        int N, M; cin >> N >> M;
        while (K--) {
            int X, Y; cin >> X >> Y;
            if (X == N || Y == M) cout << "divisa";
            else if (X < N && Y > M) cout << "NO";
            else if (X > N && Y > M) cout << "NE";
            else if (X < N && Y < M) cout << "SO";
            else cout << "SE";
            cout << endl;
        }
    }
    return 0;
} 