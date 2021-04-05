#include <iostream>

int main() {
    int a1, b1, c1, a2, b2, c2;

    std::cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    if (a1 > b1) {
        std::swap(a1, b1);
    }
    if (b1 > c1) {
        std::swap(b1, c1);
    }
    if (a1 > b1) {
        std::swap(a1, b1);
    }

    if (a2 > b2) {
        std::swap(a2, b2);
    }
    if (b2 > c2) {
        std::swap(b2, c2);
    }
    if (a2 > b2) {
        std::swap(a2, b2);
    }

    if (a1 == a2 && b1 == b2 && c1 == c2) {
        std::cout << "Boxes are equal";
    }
    else if (a1 >= a2 && b1 >= b2 && c1 >= c2) {
        std::cout << "The first box is larger than the second one";
    }
    else if (a1 <= a2 && b1 <= b2 && c1 <= c2) {
        std::cout << "The first box is smaller than the second one";
    }
    else {
        std::cout << "Boxes are incomparable";
    }
}