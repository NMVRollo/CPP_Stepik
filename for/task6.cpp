#include <iostream>
#include <vector>
#include <limits>

int main() {
    int q;
    std::vector<int> st;

    std::cin >> q;

    while (std::cin >> q) {
        st.push_back(q);
    }

    int min_pos = std::numeric_limits<int>::max();

    for (int i = 1; i < st.size(); ++i) {
        if (st[i] > 0 && st[i] < min_pos) {
            min_pos = st[i];
        }
    }

    std::cout << min_pos;

    return 0;
}