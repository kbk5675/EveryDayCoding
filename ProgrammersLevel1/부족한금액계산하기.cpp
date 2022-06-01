#include <iostream>
using namespace std;

long long solution(int price, int money, int count);

int main()
{
    cout << solution(3, 20, 4);

	return 0;
}

long long solution(int price, int money, int count)
{
    long long answer = 0;

	for (int i = 1; i <= count; i++)
		answer += price * i;

	answer -= money;

    return answer > 0 ? answer: 0;
}
