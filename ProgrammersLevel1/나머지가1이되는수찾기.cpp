#include <iostream>
using namespace std;

int solution(int n);

int main()
{
    cout << solution(10);

	return 0;
}

int solution(int n) {
    int answer = 0;

	for (int i = 1; i < n; i++)
	{
		if (n % i == 1)
		{
			answer = i;
			break;
		}
	}

    return answer;
}