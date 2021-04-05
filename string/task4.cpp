#include <iostream>
#include <string>

bool is_palindrome(const char *first, const char *last) {
    if (first < last) {
        if (*first != *last) {
            return false;
        }
        return is_palindrome(first + 1, last - 1);
    }

    return true;
}

int main() {
    std::string s;

    std::cin >> s;

    if (is_palindrome(&s[0], &s[s.size() - 1])) {
        std::cout << "yes";
    }
    else {
        std::cout << "no";
    }

    return 0;
}