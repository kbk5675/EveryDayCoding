#include <iostream>
using namespace std;

int main()
{
	auto n = 12;
	auto answer = n;
	
	for (int i = 1; i <= n/2; i++)
	{
		if (n % i == 0)
		{
			cout << n << "의 약수 : " << i << endl;
			answer += i;
		}	
	}

	cout << answer << endl;

	return 0;
}