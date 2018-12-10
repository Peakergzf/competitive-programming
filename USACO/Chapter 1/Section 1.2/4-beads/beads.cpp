/*
TASK: beads
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    freopen("beads.in", "r", stdin);
    freopen("beads.out", "w", stdout);

    int N; cin >> N;
    string b; cin >> b;
    string bb = b + b; // (easier to handle the first/last character)

    vi run_begin(N, 1);  // run_begin[i] = longest run started at b[i]
    vi run_end(N, 1);    // run_end[i] = longest run finished at b[i]

    for (int i = 0; i < N; i++) {
        // begin at i, move to the right
        int k = i;
        // current color in the run, if it's white, use the next one
        char color = (bb[i] == 'w') ? bb[i + 1] : bb[i];
        while (run_begin[i] <= N && (bb[k + 1] == color || bb[k + 1] == 'w')) {
            k++;
            run_begin[i]++;
        }

        // begin at j, move to the left
        int j = 2 * N - i - 1;
        k = j;
        color = (bb[j] == 'w') ? bb[j - 1] : bb[j];
        while (run_end[j - b.size()] <= N && (bb[k - 1] == color || bb[k - 1] == 'w')) {
            k--;
            run_end[j - b.size()]++;
        }
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        // max: for each position to break, find the max of begin + end
        // min: handle the case where all colors are the same
        ans = min(max(ans, run_begin[i] + (i ? run_end[i - 1] : run_end[N - 1])), N);
    }
    cout << ans << endl;

    return 0;
}
