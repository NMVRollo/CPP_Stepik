#include <iostream>
#include <string>

int main() {
    std::string s;
    int pos = 0;
    int cnt = 1;

    std::getline(std::cin, s);

    while ((pos = s.find(" ", pos)) != std::string::npos) {
        ++cnt;
        ++pos;
    }

    std::cout << cnt;

    return 0;
}
