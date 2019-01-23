/*
TASK: holstein
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

const int MAX_V = 25;
const int MAX_G = 15;

vi required(MAX_V + 1);
vvi feed(MAX_G + 1, vi(MAX_V + 1));

int V, G;

set<int> ans;
set<set<int>> visited;

bool enough(set<int> cur) {
    for (int i = 0; i < V; i++) {
        int amt = 0;
        for (int f : cur) {
            amt += feed[f - 1][i];
        }
        if (amt < required[i]) {
            return false;
        }
    }
    return true;
}

void rec(set<int> cur) {

    if (visited.count(cur) || (int)cur.size() >= (int)ans.size()) {
        return;
    }

    visited.insert(cur);

    if (enough(cur)) {
        ans = cur;
        return;
    }
    
    for (int i = 1; i <= G; i++) {
        // space-complexity exceeds without this
        if (cur.count(i)) continue;
        cur.insert({i});
        rec(cur);
        cur.erase({i});
    }

}

int main() {
    freopen("holstein.in", "r", stdin);
    freopen("holstein.out", "w", stdout);

    cin >> V;
    for (int i = 0; i < V; i++) cin >> required[i];

    cin >> G;
    for (int i = 0; i < G; i++) {
        for (int j = 0; j < V; j++) {
            cin >> feed[i][j];
        }
    }

    for (int i = 1; i <= G; i++) ans.insert(i);

    set<int> init;
    rec(init);

    cout << ans.size() << " ";

    vi v(ans.begin(), ans.end());
    for (int i = 0; i < (int)v.size(); i++) {
        cout << v[i];
        if (i < (int)ans.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}