/*
TASK: transform
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

/*
in the next 6 functions
we compare two 2D NxN matrices, `before` and `after`

e.g. for N=3, rotate90, 
1 2 3    7 4 1
4 5 6    8 5 2
7 8 9    9 6 3

encoded as 2 indeces of the matrix, we compare
00 01 02    02 12 22
10 11 12    01 11 21
20 21 22    00 10 20
*/

bool rotate90(vector<vector<char>> before, vector<vector<char>> after) {
    int N = before.size();
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (before[i][j] != after[j][N - i - 1]) {
                return false;
            }
        }
    }
    return true;
}

bool rotate180(vector<vector<char>> before, vector<vector<char>> after) {
    int N = before.size();
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (before[i][j] != after[N - i - 1][N - j - 1]) {
                return false;
            }
        }
    }
    return true;
}

bool rotate270(vector<vector<char>> before, vector<vector<char>> after) {
    int N = before.size();
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (before[i][j] != after[N - j - 1][i]) {
                return false;
            }
        }
    }
    return true;
}

bool reflect(vector<vector<char>> before, vector<vector<char>> after) {
    int N = before.size();
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (before[i][j] != after[i][N - j - 1]) {
                return false;
            }
        }
    }
    return true;
}

bool combine(vector<vector<char>> before, vector<vector<char>> after) {
    int N = before.size();
    // first reflect
    vector<vector<char>> before_copy = before;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            before[i][N - j - 1] = before_copy[i][j];
        }
    }
    return rotate90(before, after) || rotate180(before, after) || rotate270(before, after);
}

bool no_change(vector<vector<char>> before, vector<vector<char>> after) {
    int N = before.size();
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (before[i][j] != after[i][j]) return false;
        }
    }
    return true;
}

int main() {
    freopen("transform.in", "r", stdin);
    freopen("transform.out", "w", stdout);

    int N; cin >> N;

    vector<vector<char>> before(N, vector<char>(N));
    vector<vector<char>> after(N, vector<char>(N));
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> before[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> after[i][j];
        }
    }

    if (rotate90(before, after)) {
        cout << 1 << endl;
    }
    else if (rotate180(before, after)) {
        cout << 2 << endl;
    }
    else if (rotate270(before, after)) {
        cout << 3 << endl;
    }
    else if (reflect(before, after)) {
        cout << 4 << endl;
    }
    else if (combine(before, after)) {
        cout << 5 << endl;
    }
    else if (no_change(before, after)) {
        cout << 6 << endl;
    }
    else {
        cout << 7 << endl;
    }

    return 0;
}
