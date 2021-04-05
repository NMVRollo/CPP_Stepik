#include <iostream>
#include <set>

int main()
{
	std::set <int> s1, s2;
	int n, m;
	std::cin >> n;
	for(int i = 0; i < n; i++)
	{
		int a;
		std::cin >> a;
		s1.insert(a);
	}
	std::cin >> m;
	int k = 0;
	for(int i = 0; i < m; i++)
	{
		int a;
		std::cin >> a;
		s2.insert(a);
		if(s1.find(a) != s1.end())
			k++;
	}
	std::cout << k;
	return 0;
}