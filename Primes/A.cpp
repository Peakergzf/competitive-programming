#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
//typedef __int128 big;

ll expmod (ll a, ll b, ll m){
    ll res = 1 % m;
    a %= m;
    for (; b; b /= 2){
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
    }
    return res;
}

vi val = {2, 13, 23, 1662803};
bool is_prime (ll n){
    if (n < 2) return false;
    ll s = __builtin_ctzll(n - 1), d = (n - 1) >> s;
    for (int v : val){
        if (v >= n) break;
        ll x = expmod(v, d, n);
        if (x == 1 || x == n - 1) continue;
        for (ll r = 1; r < s; r++){
            if ((x = ((x*x) % n)) == n - 1)
                goto nextPr;
        }
        return false;
        nextPr:;
    }
    return true;
}

bool prime_perfect_square(ll n){
    for (ll i = sqrt(n) - 2; i <= sqrt(n) + 2; i++){
        if (i * i == n && is_prime(i)) return true;
    }
    return false;
}

int main() {
    int n;
    ll x;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (prime_perfect_square(x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
