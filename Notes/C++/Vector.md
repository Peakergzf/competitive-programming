### read vector of int
```c++
vector<int> v(n);
for (int i=0; i<n; i++) {
  cin >> v[i];
}
```
or
```c++
vector<int> v;
for (int i=0; i<n; i++) {
    cin >> a;
    v.push_back(a);
}
```

### sum vector of int
```c++
int total = accumulate(v.begin(), v.end(), 0);
```

### sort vector
ascending order
```c++
sort(v.begin(), v.end());
```
descending order (reverse)
```c++
sort(v.rbegin(), v.rend());
```

### read vector of pairs
```c++
vector<pair<int, int>> v;
for (int i=0; i<n; i++) {
  cin >> h >> a;
  v.push_back(make_pair(h, a));
}
```
or
```c++
vector<pair<int, int>> v(n);
for (int i=0; i<n; i++) {
  cin >> v[i].first >> v[i].second;
}
```
(by default, sort vector of pairs by first)</br>
sort by second: [here](http://bits.mdminhazulhaque.io/cpp/sort-vector-of-pairs-based-on-first-or-second-element.html)
