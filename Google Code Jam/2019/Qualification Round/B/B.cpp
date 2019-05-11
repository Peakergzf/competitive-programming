#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int T; cin >> T;
    int case_num = 1;

    while (T--) {
        cout << string("Case #") + to_string(case_num) + string(": ");
        case_num++;

        int N; cin >> N;
        string P; cin >> P;
        for (char c : P) {
            if (c == 'E') cout << 'S';
            else cout << 'E';
        }
        cout << endl;
    }
    


    return 0;
}