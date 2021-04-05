#include <iostream>
#include <string>
#include <vector>
#include <map>

std::string to_lower_case(const std::string& s) {
    std::string tmp;

    for (int i = 0; i < s.size(); ++i) {
        char ch = s[i];
        if (isupper(ch)) {
            ch = tolower(ch);
        }

        tmp.push_back(ch);
    }

    return tmp;
}

std::map<std::string, std::vector<std::string>>& fill_dict(std::map<std::string, std::vector<std::string>>& d, int n) {
    std::string word;
    std::string bookmark;

    for (int i = 0; i < n; ++i) {
        std::cin >> word;
        bookmark = to_lower_case(word);
        d[bookmark].push_back(word);
    }

    return d;
}

void print_dict(const std::map<std::string, std::vector<std::string>>& dict) {
    for (auto it = dict.begin(); it != dict.end(); ++it) {
        std::cout << it->first << ": ";
        for (auto&i : it->second) {
            std::cout << i << ' ';
        }
        std::cout << std::endl;
    }
}

bool in_dict(const std::vector<std::string>& dict, const std::string &word) {
    for (int i = 0; i < dict.size(); ++i) {
        if (word == dict[i]) {
            return true;
        }
    }

    return false;
}

int count_upper(const std::string &s) {
    int cnt = 0;

    for (int i = 0; i < s.size(); ++i) {
        if (isupper(s[i])) {
            ++cnt;
        }
    }

    return cnt;
}

int check_work(const std::map<std::string, std::vector<std::string>>& dict) {
    int mistakes = 0;
    std::string word;

    while (std::cin >> word) {
        if (count_upper(word) != 1) {
            ++mistakes;
        }
        else {
            std::string low_case_word = to_lower_case(word);
            auto it = dict.find(low_case_word);

            if (it != dict.end() && !in_dict(it->second, word)) {
                ++mistakes;
            }
        }
    }

    return mistakes;
}

int main() {
    std::map<std::string, std::vector<std::string>> dict;
    int n;

    std::cin >> n;
    dict = fill_dict(dict, n);
    std::cout << check_work(dict);

    return 0;
}