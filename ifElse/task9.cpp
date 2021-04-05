#include <iostream>

int main() {
    int x1, y1, x2, y2;

    std::cin >> x1 >> y1 >> x2 >> y2;

    int d_x = x1 - x2;
    int d_y = y1 - y2;

    if (d_x != 0 && d_y != 0) {
        if (d_x == d_y || d_x == -d_y) {
            std::cout << "YES";
        }
        else {
            std::cout << "NO";
        }
    }
    else if (d_x != 0 || d_y != 0) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

    return 0;
}