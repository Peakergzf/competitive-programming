/*
TASK: pprime
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

// --------------------------------------------------------------------------
// compute a^b mod m
ll expmod(ll a, ll b, ll m) {
    ll res = 1 % m; a %= m;
    for(; b; b /= 2) { if (b & 1) res = res * a % m; a = a * a % m; }
    return res;
}

// deterministic miller-rabin primality test
vi val = {2, 7, 61};

bool is_prime(ll n) {
    if (n < 2) return false;
    ll s = __builtin_ctzll(n - 1), d = (n - 1) >> s;
    for (int v : val) {
        if (v >= n) break;
        ll x = expmod(v, d, n);
        if (x == 1 || x == n - 1) continue;
        for (ll r = 1; r < s; r++) if ((x = x * x % n) == n - 1) goto nextPr;
        return false;
        nextPr:;
    }
    return true;
}
// --------------------------------------------------------------------------

int A, B; 
set<int> ans;

void solve(string right) {
    // given the right half of a palindrome,
    // add the middle digit, produce the whole palindrome and check primality
    string left = right;
    reverse(left.begin(), left.end());

    for (int mid = 0; mid <= 9; mid++) {
        int pali = stoi(left + to_string(mid) + right);
        if (pali >= A && pali <= B && is_prime(pali)) {
            ans.insert(pali);
        }
    }
}

int main() {
    freopen("pprime.in", "r", stdin);
    freopen("pprime.out", "w", stdout);

    cin >> A >> B;

    // all even length palindromes are divisible by 11 (https://math.stackexchange.com/a/985360)
    // so we only consider odd length palindromes (and 11 itself)
    // since A, B <= 10^8, half of palindrome will be 1-3 digits long
    int d1, d2, d3;
    string right;

    for (d1 = 1; d1 <= 9; d1 += 2) {
        for (d2 = 0; d2 <= 9; d2++) {
            for (d3 = 0; d3 <= 9; d3++) {
                // remove all leading zeros(if has): 121
                right = to_string(100 * d3 + 10 * d2 + d1);
                solve(right);
                if (d3 == 0) { // keep 2 leading zeros of right (if has): 1002001
                    right = to_string(d3) + to_string(d2) + to_string(d1);
                    solve(right);
                    if (d2 == 0) { // keep 1 leading zero of right (if has): 10201
                        right = to_string(d2) + to_string(d1);
                        solve(right);
                    }
                }
            }
        }
    }
    // previsouly we didn't generate these numbers
    for (int p : {5, 7, 11}) if (p >= A && p <= B) ans.insert(p);

    for (int v : ans) cout << v << endl;

    return 0;
}