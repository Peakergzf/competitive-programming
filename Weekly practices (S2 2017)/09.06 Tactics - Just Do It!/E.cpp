#include <bits/stdc++.h>

using namespace std;

void luul(char &c){ // lower to upper, upper to lower
	if (islower(c))
		c = toupper(c);
	else
		c = tolower(c);
}

int main(){
	string s;
	cin >> s;

	bool flag = true;
	for (int i = 1; i < (int)s.length(); i++){
		if (islower(s[i])){
			flag = false;
			break;
		}
	}

	if (flag || (int)s.length() == 1){
		for (int i = 0; i < (int)s.length(); i++){
			luul(s[i]);
		}
	}

	cout << s << endl;

	return 0;
}
