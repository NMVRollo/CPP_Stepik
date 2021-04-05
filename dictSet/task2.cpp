#include <iostream>
#include <set>

int main() {
    std::multiset<int> s;
    int n;

    std::cin >> n;

    while (std::cin >> n) {
        if (s.find(n) == s.end()) {
            std::cout << "NO" << std::endl;
        }
        else {
            std::cout << "YES" << std::endl;
        }
        s.insert(n);
    }

    return 0;
}
