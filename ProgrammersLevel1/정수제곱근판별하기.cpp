#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long a = 1221;
	int b = 0;

	if (sqrt(a) == (int)sqrt(a))
		b = pow(sqrt(a) + 1, 2);
	else
		b = -1;

	cout << b << endl;

	return 0;
}
