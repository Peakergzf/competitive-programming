/*
TASK: milk
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    freopen("milk.in", "r", stdin);
    freopen("milk.out", "w", stdout);

    int N, M; cin >> N >> M;

    vector<pii> farmer(M);

    for (int i = 0; i < M; i++) {
        int P, A; cin >> P >> A;
        farmer[i] = make_pair(P, A);
    }

    sort(farmer.begin(), farmer.end());

    int cost = 0;

    for (int i = 0; i < M; i++) {
        int price = farmer[i].first;
        int amt = min(N, farmer[i].second);
        cost += price * amt;
        N -= amt;
    }
    cout << cost << endl;

    return 0;
}