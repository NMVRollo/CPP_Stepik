#include <iostream>
#include <string>

bool check_num_ip(const std::string& num) {
    const char zero_sym = '0';
    int n = 0;

    if (!num.size()) {
        return false;
    }

    for (std::string::const_iterator it = num.cbegin(); it != num.cend(); ++it) {
        if (!isdigit(*it)) {
            return false;
        }

        if (it == num.cbegin() && *it == zero_sym && it + 1 != num.cend()) {
            return false;
        }

        n *= 10;
        n += *it - zero_sym;
    }

    bool in_limit = n >= 0 && n <= 255;

    return in_limit;
}

bool is_ipaddr(const std::string& ip) {
    int pos = 0;
    int prev_pos = 0;
    int cnt = 0;

    while ((pos = ip.find('.', prev_pos)) != std::string::npos) {
        std::string s = ip.substr(prev_pos, pos - prev_pos);

        ++cnt;

        if (!check_num_ip(s)) {
            return false;
        }

        prev_pos = pos + 1;
    }

    std::string s = ip.substr(prev_pos, ip.size() - prev_pos);

    if (!check_num_ip(s)) {
        return false;
    }

    return (cnt == 3) ? true : false;
}

int main() {
    std::string inp;

    std::cin >> inp;

    if (is_ipaddr(inp)) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

    return 0;
}