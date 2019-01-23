/*
TASK: frac1
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

struct Frac {
    // numerator x and denominator y
    int x, y;

    Frac(int a, int b) {
        x = a, y = b;
    }

    bool operator< (const Frac& f2) const {
        //     x/y < f2.x/f2.y 
        // <=> (x/y) * (y * f2.y) < (f2.x/f2.y) * (y * f2.y)
        return x * f2.y < f2.x * y;
    }
};


int main() {
    freopen("frac1.in", "r", stdin);
    freopen("frac1.out", "w", stdout);

    int N; cin >> N;

    set<Frac> ans;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= i; j++) {
            int num = j, denom = i;
            int gcd = __gcd(num, denom);
            if (gcd > 0) {
                num /= gcd;
                denom /= gcd;
            }
            ans.insert(Frac(num, denom));
        }
    }
    for (Frac f : ans) cout << f.x << "/" << f.y << endl;

    return 0;
}