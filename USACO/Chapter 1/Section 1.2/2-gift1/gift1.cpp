/*
TASK: gift1
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    freopen("gift1.in", "r", stdin);
    freopen("gift1.out", "w", stdout);

    int NP; cin >> NP; // num of people

    vector<string> name(NP); 
    vi net(NP, 0); // net gain or loss

    for (int i = 0; i < NP; i++) {
        cin >> name[i];
    }

    for (int i = 0; i < NP; i++) {
        string giver; cin >> giver;
        int amt, NG; cin >> amt >> NG; // total amount, num of gifts (recipients)

        if (NG) {
            int gift = amt / NG; // the money each recipient gets
            int rem = amt % NG; // the money giver left

            int idx = find(name.begin(), name.end(), giver) - name.begin();
            net[idx] += rem;
            net[idx] -= amt;

            for (int j = 0; j < NG; j++) {
                string recipient; cin >> recipient;
                int idx2 = find(name.begin(), name.end(), recipient) - name.begin();
                net[idx2] += gift;
            }
        }
    }

    for (int i = 0; i < NP; i++) {
        cout << name[i] << " " << net[i] << endl;
    }

    return 0;
}