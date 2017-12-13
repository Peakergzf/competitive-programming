#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;

	int j = 0;
	for (int i = 0; i < n; i++){
		if (i % 2 == 0)
			cout << string(m, '#') << endl;
		else{
			if (j % 2 == 0)
				cout << string(m-1, '.')+'#' << endl;
			else
				cout << '#'+string(m-1, '.') << endl;
			j++;
		}
	}

	return 0;
}
