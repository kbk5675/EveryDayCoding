#include <iostream>
using namespace std;

int main()
{
	int answer = 0;
	long long n = 626331;

	while (n != 1)
	{
		n = n % 2 == 0 ? n /= 2 : (n * 3) + 1;
		answer++;
	}

	if (answer >= 500)
		answer = -1;

	cout << answer << endl;

	return 0;
}