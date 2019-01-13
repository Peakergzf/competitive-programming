/*
TASK: milk3
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi CAP(3);
set<int> ans;
set<vi> visited;

void rec(vi fill) {
    // stop searching if visited (base case)
    if (visited.count(fill)) return;

    visited.insert(fill);

    // add to ans if A is empty
    if (fill[0] == 0) ans.insert(fill[2]);

    for (int from = 0; from < 3; from++) {
        for (int to = 0; to < 3; to++) {
            if (from == to) continue; // can't pour to itself
            // min of milk amount in `from` and empty space in `to`
            int pour_amt = min(fill[from], CAP[to] - fill[to]);
            fill[from] -= pour_amt;
            fill[to] += pour_amt;
            rec(fill);
            // backtracking
            fill[from] += pour_amt;
            fill[to] -= pour_amt;
        }
    }

}

int main() {
    freopen("milk3.in", "r", stdin);
    freopen("milk3.out", "w", stdout);

    for (int i = 0; i < 3; i++) cin >> CAP[i];

    // initially A, B are empty and C is full
    rec({0, 0, CAP[2]});

    vi v(ans.begin(), ans.end()); // convert from set to vector

    for (int i = 0; i < (int)v.size(); i++) {
        cout << v[i];
        if (i < (int)v.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}