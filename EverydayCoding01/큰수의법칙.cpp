#include <iostream>
#include <algorithm>
using namespace std;

// 첫째 줄에 N( 2<= N <= 1000), M(1 <= M <= 10000), K (1 <= K <= 10000)의 자연수가 주어지며, 각 자연수는 공백으로 구분한다.
// 둘쨰 줄에 N개의 자연수가 주어진다. 각 자연수는 공백으로 구분한다. 단, 각각의 자연수는 1 이상 10000이하의 수로 주어진다.
// 입력으로 주어지는 K는항상 M보다 작거나 같다.
// (다양한 수로 이뤄진 배열이 있을때 주어진 수들을 M번 더하여 가장 큰 수를 만드는 법칙)
// (단, 배열의 특정한 인덱스에 해당하는 수가 연속해서 K번을 초과하여 더해질 수 없는 것이 이 법칙의 특징)
// 출력조건 : 첫째 줄에 동빈이의 큰 수의 법칙에 따라 더해진 답을 출력한다.


// 입력 예시
// 5  8  3
// 2  4  5  4  6
//출력 
// 46

void MySolution();
void AnswerSolution();

int main()
{
	MySolution();
	AnswerSolution();

	return 0;
}

void MySolution()
{
	int N, M, K;
	int fn, sn;
	int sum = 0;
	int arr[1000] = { 0, };

	scanf_s("%d %d %d", &N, &M, &K);

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	fn = arr[0];
	sn = arr[1];

	for (int i = 0; i < M; i++)
	{
		if (i != 0 && i / K == 0)
			sum += sn;
		else
			sum += fn;
	}

	cout << sum;
}

void AnswerSolution()
{
	int N, M, K;
	int fn, sn;
	int sum = 0;
	int arr[1000] = { 0, };

	scanf_s("%d %d %d", &N, &M, &K);

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	sort(arr, arr + N);

	fn = arr[N - 1];
	sn = arr[N - 2];


	int cnt = int(M / (K + 1)) * K;
	cnt += M % (K + 1);

	sum = 0;
	sum += (cnt)*fn;
	sum += (M - cnt) * sn;

	cout << sum;
}