#include <iostream>

int main() {
    int h1, m1, s1;
    int h2, m2, s2;

    std::cin >> h1 >> m1 >> s1;
    std::cin >> h2 >> m2 >> s2;

    int h_r, m_r, s_r;

    h_r = h2 - h1;
    m_r = m2 - m1;
    s_r = s2 - s1;

    int sum_s = s_r + m_r * 60 + h_r * 3600;

    std::cout << sum_s;

    return 0;
}