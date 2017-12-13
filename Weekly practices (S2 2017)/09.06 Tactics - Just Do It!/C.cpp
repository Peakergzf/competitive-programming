#include <iostream>

using namespace std;

int main() {

	int n;
	int k;
	cin >> n;
	cin >> k;

	int a[50];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int kScore = a[k - 1];
	int ans = 0;
	for (int i = 0; i < n; i++){
	    if (a[i] >= kScore && a[i] > 0)
	        ans += 1;
	    else
	        break;
	}

  cout << ans;

	return 0;
}
