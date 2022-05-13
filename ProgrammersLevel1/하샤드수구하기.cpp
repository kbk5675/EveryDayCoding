#include <iostream>
using namespace std;

bool solution(int x);

int main()
{
	int x6 = 1523;

	cout << solution(x6) << endl;

	return 0;
}

bool solution(int x) {
	bool answer = true;
	int tmp = x;
	int sum = 0;

	while (tmp != 0)
	{
		sum += tmp % 10;
		tmp = tmp / 10;
	}

	return x % sum == 0 ? true : false;
}