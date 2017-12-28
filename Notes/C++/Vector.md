vector<int> v(n);
for (int i=0; i<n; i++) cin >> v[i];

vector<int> v;
for (int i=0; i<n; i++) {
    cin >> a;
    if (a % 2 == 0) v.push_back(a);
}

int total = accumulate(v.begin(), v.end(), 0);
// ascending order
sort(v.begin(), v.end());
// descending order (reverse)
sort(v.rbegin(), v.rend());


vector<pair<int, int>> v;
for (int i=0; i<n; i++) cin >> h >> a, v.push_back(make_pair(h, a));
v[i].first
v[i].second
