#include <iostream>

bool IsPointInCircle(double x, double y) {
    const double xc = -1, yc = 1;
    const double r = 2;

    return (x - xc) * (x - xc) + (y - yc) * (y - yc) <= r * r;
}

bool IsPointInsideCircle(double x, double y) {
    const double xc = -1, yc = 1;
    const double r = 2;

    return (x - xc) * (x - xc) + (y - yc) * (y - yc) < r * r;
}

bool IsPointInArea(double x, double y) {
    bool left_line_right = (x + y >= 0);
    bool right_line_left = (2 * x - y + 2 <= 0);
    bool left_line_left = (x + y <= 0);
    bool right_line_right = (2 * x - y + 2 >= 0);

    bool in_circ_area = IsPointInCircle(x, y) && left_line_right && right_line_left;
    bool in_bottom = !IsPointInsideCircle(x, y) && left_line_left && right_line_right;

    return in_circ_area || in_bottom;
}

int main() {
    double x, y;

    std::cin >> x >> y;

    if (IsPointInArea(x, y)) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

    return 0;
}