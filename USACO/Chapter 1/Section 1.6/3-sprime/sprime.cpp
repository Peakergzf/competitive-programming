/*
TASK: sprime
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

int N; 
vi ans;

void f(int num) {
    int len = to_string(num).size();

    if (len == N) {
        if (is_prime(num)) ans.push_back(num);
        return;
    }

    if (!is_prime(num)) return;

    // numbers ending in even digits or 5 are divisible by 2 or 5
    for (int i : {1, 3, 7, 9}) {
        string new_num = to_string(num) + to_string(i);
        f(stoi(new_num));
    }
}


int main() {
    freopen("sprime.in", "r", stdin);
    freopen("sprime.out", "w", stdout);

    cin >> N;

    for (int i : {2, 3, 5, 7}) f(i); // prime numbers of length 1

    for (int v : ans) cout << v << endl;

    return 0;
}