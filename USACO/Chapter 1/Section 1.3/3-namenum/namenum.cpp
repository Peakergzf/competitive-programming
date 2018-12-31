/*
TASK: namenum
LANG: C++                 
*/

// all tests passed

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    freopen("namenum.in", "r", stdin);
    freopen("namenum.out", "w", stdout);

    ifstream fin ("dict.txt");

    vector<string> dict; // all the valid names

    string valid_name;

    while (fin >> valid_name) {
        dict.push_back(valid_name);
    }

    vector<vector<char>> KEYPAD{
        {},
        {},
        {'A', 'B', 'C'}, // 2
        {'D', 'E', 'F'}, // 3
        {'G', 'H', 'I'}, // 4
        {'J', 'K', 'L'}, // 5
        {'M', 'N', 'O'}, // 6
        {'P', 'R', 'S'}, // 7
        {'T', 'U', 'V'}, // 8
        {'W', 'X', 'Y'}, // 9
    };

    string num; cin >> num; // the serial number

    int N = num.size(); // the number of digits

    int P = pow(3, N); // the number of all possible names

    vector<string> ans; // the names that are also in the dictionary

    /*
    generate all possible names

    e.g. given 4734,

    each of the 4 digits corresponds to 3 letters:
      4 7 3 4
    0 G P D G
    1 H R E H
    2 I S F I
    so totally 3 ^ 4 = 81 possible names:
    GPDG GPDH GPDI GPEG GPEH ... ISFG ISFH ISFI

    idx stores the index of the letter used for each digit,
    the above names correspond to:
    0000 0001 0002 0010 0011 ... 2220 2221 2222
    
    (carry in is checked from LSB to MSB, e.g. 0022 to 0100)
    */

    vi idx(N, 0);

    for (int i = 0; i < P; i++) { // for each possible name

        string name = "";

        for (int j = 0; j < N; j++) {
            // `num[j] - '0'` chooses which digit
            // `idx[j]` chooses which letter
            name += KEYPAD[num[j] - '0'][idx[j]];
        }

        // if the generated name is in the dictionary and not already added
        if (binary_search(dict.begin(), dict.end(), name)) {
            if (find(ans.begin(), ans.end(), name) == ans.end()) {
                ans.push_back(name);
            }
        }

        if (i != N - 1) { // handle the last one (e.g. idx of 2222)
            idx[N - 1]++; // increment the LSB
            for (int j = 0; j < N; j++) { // for each digit from LSB to MSB
                if (idx[N - 1 - j] == 3) { // if carry in is needed
                    idx[N - 1 - j] = 0;
                    idx[N - 2 - j]++;
                }
                else {
                    break;
                }
            }
        }
    }

    if (ans.size()) {
        for (int i = 0; i < (int)ans.size(); i++) {
            cout << ans[i] << endl;
        }
    }
    else {
        cout << "NONE" << endl;
    }

    return 0;
}
