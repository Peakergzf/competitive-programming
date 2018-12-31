/*
TASK: milk2
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    freopen("milk2.in", "r", stdin);
    freopen("milk2.out", "w", stdout);

    int N; cin >> N;

    int MILKING = 1, NOT_MILKING = -1;

    vi timeline(1000001, NOT_MILKING);

    int last_end = 0;

    for (int i = 0; i < N; i++) {
        int b_time, e_time;
        cin >> b_time >> e_time;
        // mark the timeline from begin time to end time
        // note: doesn't include e_time (e.g. 100 200, 201 301)
        for (int j = b_time; j < e_time; j++) {
            timeline[j] = MILKING;
        }
        last_end = max(last_end, e_time);
    }

    // (maximum/current) milking duration
    int max_dur = 0;
    int max_not_dur = 0;
    int cur_dur = 0;
    int cur_not_dur = 0;

    // max_not_dur doesn't include the time before first begin
    bool first_begin = false;

    // go through the timeline and update durations
    for (int i = 0; i <= last_end; i++) {
        if (timeline[i] == MILKING) {
            first_begin = true;
            cur_dur++;
            max_dur = max(max_dur, cur_dur);
            cur_not_dur = 0;
        }
        else if (first_begin && i != last_end) {
            cur_not_dur++;
            max_not_dur = max(max_not_dur, cur_not_dur);
            cur_dur = 0;
        }
    }

    cout << max_dur << " " << max_not_dur << endl;

    return 0;
}
