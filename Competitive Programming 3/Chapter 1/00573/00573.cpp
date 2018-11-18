#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    // height of the wall, climb distance in day, slide distance in night, fatigue factor
    double H, U, D, F;

    while (cin >> H >> U >> D >> F, H) {
        // height of the snail, current climb distance
        double h = 0.0, climb = U;
        int day = 1;

        while (true) {
            // "the snail never climbs a negative distance"
            if (climb > 0) {
                h += climb;
            }
            if (h > H) {
                cout << "success ";
                break;
            }
            
            h -= D;
            if (h < 0) {
                cout << "failure ";
                break;
            }
            
            day++;
            climb -= U * F / 100.0; // "always x% of the first day's distance"
        }
        cout << "on day " << day << endl;
    }

    return 0;
}