#include <iostream>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;

int countMaxMin(int arr[], int num) {
	int i = 0;
	while (i < num - 1 && arr[i] == arr[i + 1]) {
		i++;
	}
	return i;
}

int main() {

	int n;
	cin >> n;

	int a[1000000];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n);
	int minCount = countMaxMin(a, n);

	sort(a, a + n, greater<int>());
	int maxCount = countMaxMin(a, n);

	if ((minCount == n - 1 && maxCount == n - 1) || (n == 1))
		cout << 0;
	else
		cout << (n - (2 + minCount + maxCount));

	return 0;
}
