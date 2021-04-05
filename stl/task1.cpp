#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int n;
    std::vector<int> v;

    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;

        std::cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; ++i) {
        std::cout << v[i] << ' ';
    }

    return 0;
}