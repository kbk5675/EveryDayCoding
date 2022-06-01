#include <iostream>
#include <vector>
using namespace std;


string solution(int n);

int main()
{
	cout << solution(3);

	return 0;
}

string solution(int n) {
	string answer = "";

	/*for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			answer.append("수");
		else
			answer.append("박");
	}*/

	// 1은 이진수 0001 이기때문에 & 연산자를 이용해서 n이 홀수일 경우는 항상 XXX1이 존재하기 때문에 1 & 1은 true이기때문에 '박'을 출력한다.
	for (int i = 0; i < n; i++)
		i & 1 ? answer += "박" : answer += "수";

	return answer;
}