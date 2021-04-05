#include <iostream>
#include <vector>

int main() {
    int q;
    std::vector<int> v;

    std::cin >> q;

    while (std::cin >> q) {
        v.push_back(q);
    }

    int last = v.size() - 1;
    int tmp = v[last];

    for (int i = last - 1; i >= 0; --i) {
        v[i + 1] = v[i];
    }

    v[0] = tmp;

    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i] << ' ';
    }

    return 0;
}