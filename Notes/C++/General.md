### C++ data type value range
 - int: 2<sup>31</sup>−1 (≈10<sup>9</sup>)
 - long long: 2<sup>63</sup>−1 (≈10<sup>18</sup>)

### Ceil
 - double
```c++
ceil(n*1.0 / a) * ceil(m*1.0 / a)
```
 - int
```c++
((m+a-1) / a) * ((n+a-1) / a)
```

### Use (extra) parentheses to be safe...
```c++
int n = 12, m = 13, a = 4, ans;
ans = ((m+a-1) / a) * ((n+a-1) / a);
// 4*3=12
ans = (m+a-1) / a * (n+a-1) / a;
// 16/4*15/4=15
```


max(a, max(b, max(c, d)))

pow(base, exponent)


Ternary operator
string ans = (n % 2 == 0)? "YES" : "NO";


bool isComposite(int n){
    for (int a=2; a*a<=n; a++) if(n%a==0) return true;
    return false;
}


__gcd(a, b)


cout << fixed << setprecision(10) << ans*0.5 << endl;
