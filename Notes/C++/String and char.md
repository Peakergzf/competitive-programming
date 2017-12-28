
int len = s.size()
// int len = s.length()
https://stackoverflow.com/questions/905479/stdstring-length-and-size-member-functions

to_string(len - 2)

if (s1.find(s2) != string::npos){
    // found ...
}

for (int i=0; i<(int)s.size(); i++){
    // s[i] ...
}
for (char c : s) {
   // c ...
}

string s2 = s1.substr(0, 10);
more on substring and find
http://www.cplusplus.com/reference/string/string/substr/

upper case and lower case
if(isupper(s[i])) {
    s[i] = tolower(s[i]);
}
if(islower(s[i])) {
    s[i] = toupper(s[i]);
}

transform(s.begin(), s.end(), s.begin(), ::tolower);

s.erase()
s.replace()
// 208A


char freq
vi freq(26, 0);
for (char c : s) freq[c-'A']++;
