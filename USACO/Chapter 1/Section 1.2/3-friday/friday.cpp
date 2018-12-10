/*
TASK: friday
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool is_leap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int main() {
    freopen("friday.in", "r", stdin);
    freopen("friday.out", "w", stdout);

    int N; cin >> N;

    vi month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int day_of_week = 1; // mon, tue, ..., sun

    vi cnt(8, 0); // # of 13th on each day of the week

    for (int year = 1900; year < 1900 + N; year++) {

        if (is_leap(year)) month[1] = 29;
        else month[1] = 28;

        for (int i = 0; i < (int)month.size(); i++) {

            for (int day = 1; day <= month[i]; day++) {

                if (day == 13) cnt[day_of_week]++;
                
                if (day_of_week == 7) day_of_week = 1;
                else day_of_week++;
            }
        }
    }

    cout << cnt[6] << " " << cnt[7] << " "; // output sat, sun first
    for (int i = 1; i <= 5; i++) {
        cout << cnt[i] << (i == 5 ? "\n" : " ");
    }

    return 0;
}