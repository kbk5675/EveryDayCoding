#include <iostream>
using namespace std;

// 거스름돈
// 카운터에서 거스름돈으로 사용할 500원, 100원, 50원, 10원이 무한히 존재.
// 손님에게 거슬러줘야 할 돈이 N개일 때 거슬러줘야할 동전의 최소 갯수를 구하라.
// 단, 거슬러 줘야 할 돈 N은 항상 10의 배수이다.

// 8줄
void MySolution()
{
	int N;
	int cnt = 0;
	cin >> N;

	cnt = N / 500;
	cnt += (N % 500) / 100;
	cnt += ((N % 500) % 100) / 50;
	cnt += ((((N % 500) % 100)) % 50) / 10;

	cout << cnt;
}


// 8줄
void AnserSolution()
{
	int N;
	cin >> N;
	int cnt = 0;

	int arr[4] = { 500,100,50,10 };

	for (int i = 0; i < 4; i++)
	{
		cnt += N / arr[i];
		N %= arr[i];
	}

	cout << cnt;
}

int main()
{
	MySolution();
	AnserSolution();

	return 0;
}


