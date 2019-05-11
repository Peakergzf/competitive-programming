#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

bool ans_found = false;

bool valid_move(int pre_r, int pre_c, int r, int c) {
    return !(pre_r == r || pre_c == c || r - c == pre_r - pre_c || r + c == pre_r + pre_c); 
}

void rec(int r, int c, vvi g, int cnt, stack<pii> v_ord) {
    // if all cells are visited: print answer
    bool all_visited = true;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (g[i][j] == 0) {
                all_visited = false;
                goto print_ans;
            } 
        }
    }
    print_ans: ;
    if (all_visited) {
        // cout << endl;
        // for (int i = 0; i < r; i++) {
        //     for (int j = 0; j < c; j++) {
        //         cout << g[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        cout << "POSSIBLE" << endl;
        vector<pii> ans;
        while (!v_ord.empty()) {
            pii pos = v_ord.top();
            ans.push_back(pos);
            v_ord.pop();
        }
        reverse(ans.begin(), ans.end());
        for (auto& p : ans) {
            cout << p.first + 1 << " " << p.second + 1 << endl;
        }
        ans_found = true;
        return;
    }
    
    pii pre_pos = v_ord.top();
    int pre_r = pre_pos.first, pre_c = pre_pos.second;
    // for each possible valid next move: try them
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (g[i][j] > 0) continue;
            if (valid_move(pre_r, pre_c, i, j)) {
                cnt++;
                g[i][j] = cnt;
                v_ord.push(make_pair(i, j));

                rec(r, c, g, cnt, v_ord);
                if (ans_found) return;

                cnt--;
                g[i][j] = 0;
                v_ord.pop();
            }
        }
    }

}

void solve(int r, int c) {
    vvi G(r, vi(c, 0));
    ans_found = false;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            G[i][j] = 1;
            stack<pii> visit_ord;
            visit_ord.push(make_pair(i, j));
            rec(r, c, G, 1, visit_ord);
            if (ans_found) return;
            G[i][j] = 0;
            visit_ord.pop();
        }
    }
    if (!ans_found) cout << "IMPOSSIBLE" << endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int T; cin >> T;
    int case_num = 1;

    while (T--) {
        cout << string("Case #") + to_string(case_num) + string(": ");
        case_num++;

        int R, C; cin >> R >> C;

        solve(R, C);
    }

    return 0;
}