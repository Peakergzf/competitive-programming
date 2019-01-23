/*
TASK: frac1
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

/*
0/1                                                              1/1
                               1/2
                  1/3                      2/3
        1/4              2/5         3/5                 3/4
    1/5      2/7     3/8    3/7   4/7   5/8       5/7         4/5
*/

int N;
void gen_frac(int a, int b, int c, int d) {
    // generate (a+c)/(b+d) from a/b and c/d

    if (b + d > N) return;

    gen_frac(a, b, a + c, b + d);

    cout << a + c << "/" << b + d << endl;

    gen_frac(a + c, b + d, c, d);
}


int main() {
    // freopen("frac1.in", "r", stdin);
    // freopen("frac1.out", "w", stdout);

    cin >> N;

    cout << "0/1" << endl;

    gen_frac(0, 1, 1, 1);

    cout << "1/1" << endl;

    return 0;
}