#include <iostream>
#include <map>
#include <string>

int main()
{
	std::map<std::string, std::string> s1, s2;
	std::map<std::string, std::string>::iterator j;
	int n;
	std::cin >> n;
	for(int i = 0; i < n; i++)
	{
		std::string temp1, temp2;
		std::cin >> temp1 >> temp2;
		s1.insert(std::pair<std::string, std::string>(temp1, temp2));
		s2.insert(std::pair<std::string, std::string>(temp2, temp1));
	}
	std::string key;
	std::cin >> key;
	j = s1.find(key) != s1.end() ? s1.find(key) : s2.find(key);
	std::cout << j->second;
	return 0;
}