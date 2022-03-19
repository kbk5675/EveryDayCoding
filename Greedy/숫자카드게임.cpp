#include <iostream>
#include <algorithm>
using namespace std;

// 카드들이 N x M 형태로 놓여 있을 때, 게임의 룰에 맞게 카드를 뽑는 프로그램을 만드시오.
// 첫째 줄에 숫자 카드들이 놓인 행의 개수 N, 열의 개수 M이 공백을 기준으로 하여 각각 자연수로 주어진다
// 둘째 줄부터 N개의 줄에 걸쳐 각 카드에 적힌 숫자가 주어진다.

// 출력 : 가장 숫자가 낮은 카드를 뽑아야 한다.

void MySolution();
void AnswerSolution();

int main()
{
	//MySolution();
	AnswerSolution();

	return 0;
}

void MySolution()
{
	int N, M, tmp;
	int col = 0;
	int board[10][10] = { 0, };
	int arr[10] = { 0, };

	scanf_s("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> board[i][j];
		}
	}

	while (col != N)
	{
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (board[col][j] < board[col][j + 1])
				{
					tmp = board[col][j];
					board[col][j] = board[col][j + 1];
					board[col][j + 1] = tmp;
				}
			}
		}
		col++;
	}

	for (int i = 0; i < N; i++)
		arr[i] = board[i][M - 1];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	cout << arr[0];
}

void AnswerSolution()
{
	int N, M;
	int board[10][10] = { 0, };
	int arr[10] = { 0, };
	int* minVal[10] = { 0, };
	

	scanf_s("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cin >>  board[i][j];
		
	}

	for (int i = 0; i < N; i++)
		minVal[i] = min_element(board[i], board[i] + M);

	cout << **max_element(minVal, minVal + N);
}