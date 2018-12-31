/*
TASK: dualpal
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool is_palindrome(string s) {
    return s == string(s.rbegin(), s.rend());
}

string to_base(int b, int n) {
    // convert number n in base 10 to base b
    string ans = "";
    while (n > 0) {
        int rem = n % b;
        n /= b;
        ans += to_string(rem); // 2 <= b <= 10
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

bool is_dual_pal(int n) {
    int num_pal = 0;
    for (int b = 2; b <= 10; b++) {
        if (is_palindrome(to_base(b, n))) {
            num_pal++;
        }
    }
    return num_pal >= 2;
}

int main() {
    freopen("dualpal.in", "r", stdin);
    freopen("dualpal.out", "w", stdout);

    int N, S; cin >> N >> S;

    S++; // current number to be checked
    int n = 0; // the # of dual pal found

    while (n < N) {
        if (is_dual_pal(S)) {
            cout << S << endl;
            n++;
        }
        S++;
    }

    return 0;
}