#include <iostream>
#include <set>

int main() {
    std::set<int> s;
    int n;

    std::cin >> n;

    while (std::cin >> n) {
        s.insert(n);
    }

    std::cout << s.size();

    return 0;
}