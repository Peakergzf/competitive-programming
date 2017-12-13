#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	long long k, a, b;
	cin >> k >> a >> b;

	if (a < k && b < k)
		cout << -1 << endl;
	else{
		long long m = a / k;
		long long n = b / k;

		if ((m > 0 && n > 0) || (max(a, b) % k == 0))
			cout << (m + n) << endl;
		else
			cout << -1 << endl;
	}
	return 0;
}
