#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, k; cin >> n >> k;
  string s; cin >> s;

  vi freq(26, 0);
  for (char c : s) freq[c-'a']++;

  // among the 26 chars, there are 3 types of them (3 types of index in the freq):
  // 1. chars that need to be deleted all occurences, 
  // 2. char that needs to be deleted some of the occurences (sometimes no need), 
  // 3. chars that don't need to be deleted at all.

  int idx = 0; // the first char that's not type 1: i.e. the first char that doesn't need to be completely deleted
  int cur_sum = 0;

  while (idx < 26 && cur_sum < k) {
    cur_sum += freq[idx]; // sum freq starting from a, b ... z
    idx += 1;
  }
  bool par_del = cur_sum - k != 0;
  if (par_del) idx -= 1;
  
  if (n != k) { // if there are some char left (not all deleted)

    if (par_del) {
      int pt_lft = cur_sum -  k; // number of chars that don't need to be partially deleted
      int cur_pt = 0; // number of partially deleted char that has been deleted

      for (char c : s) {
        int cur_idx = c - 'a';
        if (c - 'a' == idx) {
          if (cur_pt > freq[idx] - pt_lft - 1) cout << c;
          else cur_pt += 1;
        }
        if (cur_idx > idx) cout << c;
      }
    }
    else {
      for (char c : s) {
        int cur_idx = c - 'a';
        if (cur_idx >= idx) cout << c;
      }
    }
  }

  cout << endl;
  
  return 0;
}
