#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    vi v;
    int x;
    while (cin >> x) {
        v.push_back(x);

        nth_element(v.begin(), v.begin() + v.size() / 2, v.end());
        int right = v[v.size() / 2];

        if (v.size() % 2 != 0) {
            cout << right << endl;
        }
        else {
            nth_element(v.begin(), v.begin() + v.size() / 2 - 1, v.end());
            int left = v[v.size() / 2 - 1];
            int ans = (left + right) / 2;
            cout << ans << endl;
        }
    }
    return 0;
} 