#include <iostream>
#include <algorithm>

std::string solution(std::string s);

int main()
{
	std::string s = "Zbcdefg";
	std::cout << solution(s);

	return 0;
}

std::string solution(std::string s)
{
	sort(s.begin(), s.end(), std::greater<>());

	return s;
}