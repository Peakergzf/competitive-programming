/*
TASK: namenum
LANG: C++                 
*/

// `names` exceeds space complexity requirement

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    freopen("namenum.in", "r", stdin);
    freopen("namenum.out", "w", stdout);

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

    string num; cin >> num;

    int P = pow(3, num.size());

    vector<string> names(P, "");

    /*
    generate all possible names

    e.g. given 4734, 

                   repeat parent_cnt
       /|\         
      G H I        27     1
         /|\       
        P R S      9      3
           /|\     
          D E F    3      9
             /|\
            G H I  1      27

    in this trie, each branch represents a name
    to construct each name from the trie as follows:

    G..........GH..........HI..........I
    P..PR..RS..SP..PR..RS..SP..PR..RS..S
    ....................................
    GHIGHIGHI........................GHI

    we use
    parent_cnt: the # of nodes above the current level 
    (i.e. group of 3 repeated, e.g. P..PR..RS..S x 3)
    repeat: the # of times each node needs to be repeated
    (e.g. G x 27)

    */

    int parent_cnt = 1;
    int repeat = P / 3;

    for (char d : num) {
        int idx = 0;
        for (int i = 0; i < parent_cnt; i++) { 
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < repeat; k++) { 
                    names[idx++] += KEYPAD[d - '0'][j];
                }
            }
        }
        repeat /= 3;
        parent_cnt *= 3;
    }

    ifstream fin ("dict.txt");

    vector<string> dict;

    string name;

    while (fin >> name) {
        dict.push_back(name);
    }

    vector<string> ans;

    for (int i = 0; i < P; i++) {
        if (binary_search(dict.begin(), dict.end(), names[i])) {
            ans.push_back(names[i]);
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
