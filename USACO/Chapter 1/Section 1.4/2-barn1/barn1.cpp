/*
TASK: barn1
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    freopen("barn1.in", "r", stdin);
    freopen("barn1.out", "w", stdout);

    int M, S, C; cin >> M >> S >> C;

    vector<bool> occupied(S + 1, false);
    vi stall_num(C);

    for (int i = 0; i < C; i++) {
        int n; cin >> n;
        occupied[n] = true;
        stall_num[i] = n;
    }

    sort(stall_num.begin(), stall_num.end());
    int first = stall_num[0], last = stall_num[C - 1];

    vi vacancy; // the numbers of consecutive unoccupied stalls
    // e.g. for 3, 4, 6, 8, 14, 15, 16, 17, 21, 25, 26, 27, 30, 31, 40, 41, 42, 43
    // vacancy gives:         5      3      8
    // which is covering: 3-8, 14-21, 25-31, 40-43
    int cur_vac = 0;
    for (int i = first; i <= last; i++) {
        if (occupied[i]) {
            vacancy.push_back(cur_vac);
            cur_vac = 0;
        }
        else {
            cur_vac++;
        }
    }

    sort(vacancy.rbegin(), vacancy.rend());

    int ans = last - first + 1;
    // M boards, M - 1 "gaps"
    // min ensures using the min of max num of vacancies and # of vacancies
    for (int i = 0; i < min(M - 1, (int)vacancy.size()); i++) {
        ans -= vacancy[i];
    }
    cout << ans << endl;

    return 0;
}