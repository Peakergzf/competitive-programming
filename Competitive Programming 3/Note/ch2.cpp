#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {

    // -------------------------- initialize vector --------------------------

    vi v = {9, 7, 2, 15, 4};

    vi v1(3, 9); // {9, 9, 9}

    int arr[5] = {9, 7, 2, 15, 4};
    vector<int> v2(arr, arr + sizeof(arr) / sizeof(arr[0])); // from array
    
    // cout << v[0] << v1[0] << arr[0] << v2[0] << endl;

    // -------------------------- sorting -------------------------------------

    // descending
    sort(v.rbegin(), v.rend());
    // ascending
    sort(v.begin(), v.end());

    // multi-field sorting
    // use "chained" pair and put the highest priority in front
    typedef pair < int, pair < int, int > > state;
    state a = make_pair(1, make_pair(1, 0));
    state b = make_pair(2, make_pair(3, 2));
    state c = make_pair(2, make_pair(2, 1));
    vector<state> test;
    test.push_back(a), test.push_back(b), test.push_back(c);

    sort(test.begin(), test.end());   // no need to use a comparison function

    // cout << test[2].second.second << endl;

    // --------------------------- binary search -------------------------------

    vi::iterator j;
    j = lower_bound(v.begin(), v.end(), 7);
    // cout << *j << endl;

    j = lower_bound(v.begin(), v.end(), 999);
    if (j == v.end()) cout << "not found" << endl;

    return 0;
} 