#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    string s0;
    while (cin >> s0, s0 != "#") {
        if (next_permutation(s0.begin(), s0.end())) cout << s0;
        // returns true if the function could rearrange the object as a lexicographicaly greater permutation
        else cout << "No Successor";
        // returns false to indicate that the arrangement is not greater than the previous, 
        // but the lowest possible (sorted in ascending order).
        cout << endl;
    }
    return 0;
} 