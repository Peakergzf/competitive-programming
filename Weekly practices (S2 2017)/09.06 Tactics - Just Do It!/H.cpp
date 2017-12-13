#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string s;
	cin >> n;
	cin >> s;

	if (n >= 26){
		for (int i = 0; i < (int)s.length(); i++){
			s[i] = tolower(s[i]);
		}

		bool flag = true;
		for (char c='a'; c<='z';c++){
			if (s.find(c) == string::npos){
				flag = false;
				break;
			}
		}

		if (flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	else{
		cout << "NO" << endl;
	}

	return 0;
}
