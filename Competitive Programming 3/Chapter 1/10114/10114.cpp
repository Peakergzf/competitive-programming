#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    int loan_dur, dep_cnt; double down_pay, loan_amt;

    vector<double> dep(105);
    
    while (cin >> loan_dur >> down_pay >> loan_amt >> dep_cnt, loan_dur >= 0) {

        while (dep_cnt--) {
            int month_num; double dep_per;
            cin >> month_num >> dep_per;

            for (int i = month_num; i < 105; i++) {
                dep[i] = dep_per;
            }
        }

        int month = 0;
        double car_value = (loan_amt + down_pay) * (1.0 - dep[month]);
        double total_owe = loan_amt;
        
        while (car_value < total_owe) {
            month++;
            car_value *= (1.0 - dep[month]);
            total_owe -= loan_amt / loan_dur;
        }

        cout << month;
        if (month == 1) cout << " month";
        else cout << " months";
        cout << endl;
    }

    return 0;
}