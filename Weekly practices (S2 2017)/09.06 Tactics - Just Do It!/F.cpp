#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;

	vector <int> v(max(n, m));

	int i = 1;
	while (true){
		v.push_back(i * m);
		n -= 1;

		if (find(v.begin(), v.end(), i) != v.end())
			n += 1;

		if (n == 0){
			cout << i << endl;
			goto END;
		}

		i++;
	}

	END:
	return 0;
}
