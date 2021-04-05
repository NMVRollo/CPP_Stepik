#include <iostream>
#include <vector>

int main() {
    int q;
    std::vector<int> v;

    std::cin >> q;

    while (std::cin >> q) {
        v.push_back(q);
    }

    int cnt = 0;

    for (int i = 0; i < v.size(); ++i) {
        for (int j = i + 1; j < v.size(); ++j) {
            if (v[i] == v[j]) {
                ++cnt;
            }
        }
    }

    std::cout << cnt;

    return 0;
}