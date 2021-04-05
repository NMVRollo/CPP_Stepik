#include <iostream>
#include <vector>

int main() {
    int q;
    std::vector<int> v;

    std::cin >> q;

    std::vector<int> uni(q);

    while (std::cin >> q) {
        v.push_back(q);
    }

    for (int i = 0; i < v.size(); ++i) {
        for (int j = i + 1; j < v.size(); ++j) {
            if (v[i] == v[j]) {
                ++uni[i];
                ++uni[j];
            }
        }
    }

    for (int i = 0; i < uni.size(); ++i) {
        if (uni[i] == 0) {
            std::cout << v[i] << ' ';
        }
    }

    return 0;
}