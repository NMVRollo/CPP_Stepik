#include <iostream>
#include <vector>
#include <iterator>

int main() {
    int q;
    std::vector<int> v;

    std::cin >> q;

    while (std::cin >> q) {
        v.push_back(q);
    }

    for (int i = 1; i < v.size(); i += 2) {
        std::swap(v[i], v[i - 1]);
    }

    copy(v.begin(), v.end(), std::ostream_iterator<int> {std::cout, " "});

    return 0;
}