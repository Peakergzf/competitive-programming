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
        string s = to_string(N);
        string x = "", y = "";
        for (int i = 0; i < (int)s.size(); i++) {
            if (s[i] != '4') {
                x += s[i];
                y += '0';
            }
            else {
                x += '2';
                y += '2';
            }
        }
        cout << x << " " << stoi(y) << endl;
    }
    


    return 0;
}