/*
TASK: crypt1
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool three_digits_long(int num) {
    // check if the partial product is 3 digits long
    return to_string(num).size() == 3;
}

bool provided(vi digits, int num) {
    // check if every digit of the number is provided
    string s = to_string(num);
    for (char c : s) {
        int d = c - '0';
        if (!binary_search(digits.begin(), digits.end(), d)) {
            return false;
        }
    }
    return true;
}

int main() {
    freopen("crypt1.in", "r", stdin);
    freopen("crypt1.out", "w", stdout);

    int N; cin >> N;
    vi digits(N);
    for (int i = 0; i < N; i++) {
        cin >> digits[i];
    }
    // get ready for binary search
    sort(digits.begin(), digits.end());

    int a, b, c, d, e;

    // abcde, each has N choices, totally N^5
    int P = pow(N, 5);

    // the same way to generate all possible values for abcde as 1.3 3-namenum
    vi idx(5, 0);

    // the # of solutions
    int ans = 0;

    for (int i = 0; i < P; i++) {
        /*
          abc
        x  de
        -----
          ***   p1
         ***    p2
        -----
         ****   prod
        */
        a = digits[idx[0]], b = digits[idx[1]], c = digits[idx[2]];
        d = digits[idx[3]], e = digits[idx[4]];

        int abc = stoi(to_string(a) + to_string(b) + to_string(c));
        int de = stoi(to_string(d) + to_string(e));

        int p1 = e * abc;
        int p2 = d * abc;
        int prod = de * abc;

        if (three_digits_long(p1) && three_digits_long(p2)) { 
            if (provided(digits, p1) && provided(digits, p2) && provided(digits, prod)) {
                ans++;
            }
        }
        // generate next values for abcde
        if (i != P - 1) {
            idx[4]++;
            for (int j = 0; j < 5; j++) {
                if (idx[4 - j] == N) {
                    idx[4 - j] = 0;
                    idx[3 - j]++;
                }
                else {
                    break;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}