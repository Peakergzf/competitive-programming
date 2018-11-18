#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    // # of participants, budget, # of hotels, # of weeks
    int N, B, H, W; 

    while (cin >> N >> B >> H >> W) { // each test case

        int min_cost = INT_MAX / 2;

        for (int i = 0; i < H; i++) { // each hotel

            int p; cin >> p; // price per person per week

            for (int j = 0; j < W; j++) { // each week
                int available; cin >> available; // # of beds available
                
                if (available >= N) {
                    min_cost = min(min_cost, N * p);
                }
            }
        }

        if (min_cost > B) cout << "stay home";
        else cout << min_cost;
        cout << endl;
        
    }

    return 0;
} 