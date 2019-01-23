/*
TASK: sort3
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    freopen("sort3.in", "r", stdin);
    freopen("sort3.out", "w", stdout);

    int N; cin >> N;
    vi seq(N);
    for (int i = 0; i < N; i++) cin >> seq[i];

    vi sorted = seq;
    sort(sorted.begin(), sorted.end());

    int cnt = 0;

    /*
    sorted 1 1 | 2 2 2 | 3 3 3 3
    ----------------------------
    seq    2 2 | 1 3 3 | 3 2 3 1
           ^     ^ ^       ^
    (after two-elem swap)
    seq    1 2 | 2 2 3 | 3 3 3 1
             ^       ^         ^
    (after three-elem swap)
    seq    1 1 | 2 2 2 | 3 3 3 3
    */

    // two-elem swap
    for (int i = 0; i < N; i++) {
        if (seq[i] == sorted[i]) { // no swap needed
            continue;
        }
        for (int j = i + 1; j < N; j++) {
            // if seq[i] and seq[j] should be swapped
            if (seq[i] == sorted[j] && seq[j] == sorted[i]) {
                iter_swap(seq.begin() + i, seq.begin() + j);
                cnt++;
            }
        }
    }
    // the # of three-elem swap needed == the # of misplaced 1s (or 2s, 3s)
    for (int i = 0; i < find(sorted.begin(), sorted.end(), 2) - sorted.begin(); i++) {
        // each three-elem swap takes 2 swaps
        if (seq[i] != 1) cnt += 2;
    }

    cout << cnt << endl;

    return 0;
}