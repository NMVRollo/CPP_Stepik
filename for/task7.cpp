#include <iostream>
#include <cmath>
#include <vector>

int main() {
    int q;
    std::vector<int> st;

    std::cin >> q;

    while (std::cin >> q) {
        st.push_back(q);
    }

    int min_odd = 0;

    for (int i = 0; i < st.size(); ++i) {
        if (abs(st[i]) % 2 == 1) {
            if (min_odd == 0) {
                min_odd = st[i];
            }
            else {
                if (st[i] < min_odd) {
                    min_odd = st[i];
                }
            }
        }
    }

    std::cout << min_odd;

    return 0;
}