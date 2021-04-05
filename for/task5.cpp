#include <iostream>
#include <vector>

int main(void) {
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	std::cin >> a[0];
	for (int i = 1; i < n; i++) {
		std::cin >> a[i];
		if ((a[i] < 0 && a[i - 1] < 0) || (a[i] > 0 && a[i - 1] > 0)) {
			a[i] > a[i - 1] ? std::cout << a[i - 1] << " " << a[i] : std::cout << a[i] << " " << a[i - 1];
			break;
		}
	}
}