### c++ data type value range
 - int: 2<sup>31</sup>−1 (≈10<sup>9</sup>)
 - long long: 2<sup>63</sup>−1 (≈10<sup>18</sup>)

### ceil
 - double
```c++
ceil(m*1.0 / a) * ceil(n*1.0 / a)
```
 - int
```c++
((m+a-1) / a) * ((n+a-1) / a)
```

### use (extra) parentheses to be safe...
```c++
int n = 12, m = 13, a = 4, ans;
ans = ((m+a-1) / a) * ((n+a-1) / a);
// 4*3=12
ans = (m+a-1) / a * (n+a-1) / a;
// 16/4*15/4=15
```

### max of multiple numbers
```c++
max(a, max(b, max(c, d)))
```

### power
```c++
pow(base, exponent)
```

### Ternary operator
```c++
string ans = (n % 2 == 0)? "YES" : "NO";
```

### built-in gcd
```c++
__gcd(a, b)
```

### "The answer will be considered correct if its relative or absolute error doesn't exceed 10<sup>10</sup>"
```c++
cout << fixed << setprecision(10) << ans*0.5 << endl;
```
More on relative and absolute error: [here](https://stackoverflow.com/a/15191525)

### don't use this if you need n later...
```c++
while (n--) {

}
```

### arbitrary number of input
```c++
while (cin >> s) {

}
```
