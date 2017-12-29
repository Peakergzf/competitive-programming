### length/size
```c++
int len = s.size();
// int len = s.length();
```
Difference between the two: [here](https://stackoverflow.com/a/905487)

### int to string
```c++
string s = to_string(10);
```
### string to int
```c++
int i = stoi(s);
```

### check if the string contains certain substring
```c++
if (s1.find(s2) != string::npos){
    // found ...
}
```

### iterate through string char by char
```c++
for (int i=0; i<(int)s.size(); i++){
    // s[i] ...
}
```
or
```c++
for (char c : s) {
   // c ...
}
```
More detail: [here](https://stackoverflow.com/a/9438329)

### substring
```c++
string s2 = s1.substr(posOfFirstChar, numOfCharToInclude);
```
More on substring and find: [here](http://www.cplusplus.com/reference/string/string/substr/)

### upper case and lower case
Iterating through each character
```c++
if(isupper(s[i])) {
    s[i] = tolower(s[i]);
}
if(islower(s[i])) {
    s[i] = toupper(s[i]);
}
```
Entire string
```c++
transform(s.begin(), s.end(), s.begin(), ::tolower);
```

### erase and replace
```c++
s.erase()
s.replace()
// 208A
```

### char frequency count
```c++
vi freq(26, 0);
for (char c : s) freq[c-'A']++;
```
