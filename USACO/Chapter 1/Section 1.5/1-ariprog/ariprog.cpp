/*
TASK: ariprog
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    freopen("ariprog.in", "r", stdin);
    freopen("ariprog.out", "w", stdout);

    int N, M; cin >> N >> M;

    set<int> s;

    // construct all possible bisquare numbers
    for (int p = 0; p <= M; p++) {
        for (int q = 0; q <= M; q++) {
            s.insert(p * p + q * q);
        }
    }

    vi v;
    v.insert(v.end(), s.begin(), s.end()); // (convert from set to vector)

    // construct O(1) lookup
    int max = *max_element(v.begin(), v.end());
    vi exist(max + 1, 0);
    for (int i = 0; i < (int)v.size(); i++) {
        exist[v[i]] = 1;
    }

    vector<pii> ans;
    for (int k = 0; k <= (int)v.size() - N; k++) {
        for (int j = k + 1; j < (int)v.size(); j++) {
            // for each possible start value a and diff value b
            int a = v[k], b = v[j] - v[k];
            bool found_all = true;
            // check if all N elements can be found
            for (int i = 1; i < N; i++) {
                int elem = a + i * b;
                // O(1) vector lookup: pass
                // O(log n) set lookup: TLE
                if (elem > max || exist[elem] == 0) {
                    found_all = false;
                    break;
                } 
            }
            if (found_all) {
                // ordered with smallest-difference sequences first 
                // and smallest starting number within those sequences first
                ans.push_back(make_pair(b, a));
            }
        }
    }

    if (ans.size()) {
        sort(ans.begin(), ans.end());
        
        for (int i = 0; i < (int)ans.size(); i++) {
            cout << ans[i].second << " " << ans[i].first << endl;
        }
    }
    else {
        cout << "NONE" << endl;
    }


    return 0;
}