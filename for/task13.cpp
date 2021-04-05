#include <iostream>
#include <cmath>
#include <vector>

int main() {
    int x, y;
    std::vector<int> v;

    while (std::cin >> x >> y) {
        v.push_back(x);
        v.push_back(y);
    }

    bool pair = false;

    for (int i = 0; i < v.size() && !pair; i += 2) {
        for (int j = i + 2; j < v.size() && !pair; j += 2) {
            if (v[i] == v[j] || v[i + 1] == v[j + 1] || abs(v[i] - v[j]) == abs(v[i + 1] - v[j + 1])) {
                pair = true;
            }
        }
    }

    if (pair) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

    return 0;
}