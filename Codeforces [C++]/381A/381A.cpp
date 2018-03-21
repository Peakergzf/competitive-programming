#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  vi v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  int sereja=0, dima=0;
  for (int i=0; i<n; i++) {
    int front=0, back=n-1;
    while (v[front]==0 && front!=back) front++;
    while (v[back]==0 && front!=back) back--;
    if (i%2==0) sereja+=max(v[front],v[back]);
    else dima+=max(v[front],v[back]);
    if (v[front]>v[back]) v[front]=0;
    else v[back]=0;
  }
  cout << sereja << " " << dima << endl;

  return 0;
}
