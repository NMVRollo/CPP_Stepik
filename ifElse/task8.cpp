#include <iostream>

int main() {
    int x1, y1, x2, y2;

    std::cin >> x1 >> y1 >> x2 >> y2;


    if (y1 - y2 == x1 - x2 || y1 - y2 == -(x1 - x2)) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
}