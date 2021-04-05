#include <iostream>
#include <set>

int main()
{
	std::set <int> s1, s2, s3;
	int n, m;
	std::cin >> n;
	for(int i = 0; i < n; i++)
	{
		int a;
		std::cin >> a;
		s1.insert(a);
	}
	int k = 0;
	std::cin >> m;
	for(int i = 0; i < m; i++)
	{
		int a;
		std::cin >> a;
		s2.insert(a);
		if(s1.find(a) != s1.end())
			s3.insert(a);
	}
	std::set <int>::iterator j;
	for(j = s3.begin(); j != s3.end(); j++)
		std::cout << *j << ' ';
	return 0;
}