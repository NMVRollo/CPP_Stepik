#include <iostream>
#include <vector>

int main() {
    int q;
    std::vector<int> st;

    std::cin >> q;

    for (int i = 0; i != q; ++i) {
        int tmp;

        std::cin >> tmp;
        st.push_back(tmp);
    }

    for (int i = 0; i < st.size(); ++i) {
        if (i % 2 == 0) {
            std::cout << st[i] << ' ';
        }
    }

    return 0;
}