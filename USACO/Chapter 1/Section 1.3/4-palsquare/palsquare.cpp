/*
TASK: palsquare
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

string get_digit(int b, int n) {
    // base                    11   12   13   14   15   16   17   18   19   20  
    vector<string> letters = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};

    if (n <= 9) {
        return to_string(n);
    }
    else {
        return letters[n - 10];
    }
}

string to_base(int b, int n) {
    // convert number n in base 10 to base b
    string ans = "";
    while (n > 0) {
        int rem = n % b;
        n /= b;
        ans += get_digit(b, rem);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    freopen("palsquare.in", "r", stdin);
    freopen("palsquare.out", "w", stdout);

    int B; cin >> B;

    for (int i = 1; i <= 300; i++) {
        if (is_palindrome(to_base(B, i * i))) {
            cout << to_base(B, i) << " " << to_base(B, i * i) << endl;
        }
    }

    return 0;
}