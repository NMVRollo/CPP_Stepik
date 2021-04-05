#include <iostream>
#include <vector>

int main() {
    int q;
    std::vector<int> st;

    std::cin >> q;

    for (int i = 0; i < q; ++i) {
        int tmp;

        std::cin >> tmp;

        if (tmp > 0) {
            st.push_back(tmp);
        }
    }

    std::cout << st.size();

    return 0;
}