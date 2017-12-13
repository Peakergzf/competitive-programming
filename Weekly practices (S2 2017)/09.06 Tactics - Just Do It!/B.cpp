#include <iostream>
#include <algorithm>

using namespace std;

long long countMaxMin(long long arr[], long long num) {
	long long  i = 0;
	while (i < num - 1 && arr[i] == arr[i + 1]) {
		i++;
	}
	return (i + 1);
}

int main() {

	long long n;
	cin >> n;

	long long a[200000];
	for (long long i = 0; i < n; i++) {
		cin >> a[i];
	}

  sort(a, a + n);
  long long minCount = countMaxMin(a, n);

  sort(a, a + n, greater<long long>());
  long long maxCount = countMaxMin(a, n);

  long long ans = 0;
  cout << (a[0] - a[n - 1]) << " ";
  if ((minCount == n) && (maxCount == n))
      ans = (n * (n - 1) / 2);
  else
      ans = minCount * maxCount;

  cout << ans;

	return 0;
}
