#include <iostream>
#include <string>

int main() {
    std::string word;
    std::string longest_word;

    while (std::cin >> word) {
        if (longest_word.empty() || word.size() > longest_word.size()) {
            longest_word = word;
        }
    }

    std::cout << longest_word;

    return 0;
}