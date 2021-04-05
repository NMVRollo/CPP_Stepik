#include <iostream>
#include <vector>

int main() {
    int q;
    std::vector<int> st;

    std::cin >> q;

    for (int i = 0; i < q; ++i) {
        int tmp;

        std::cin >> tmp;
        st.push_back(tmp);
    }

    for (int i = 1; i < st.size(); ++i) {
        if (st[i - 1] < st[i]) {
            std::cout << st[i] << ' ';
        }
    }

    return 0;
}