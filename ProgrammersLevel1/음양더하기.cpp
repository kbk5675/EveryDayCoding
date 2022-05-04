#include <iostream>
#include <vector>
using namespace std;

// signs[i] 가 참이면 absolutes[i] 의 실제 정수가 양수임을, 그렇지 않으면 음수임을 의미합니다.

int solution(vector<int> absolutes, vector<bool> signs);

int main()
{
	vector<int> absolutes = { 4,7,12 };
	vector<bool> signs = { true, false, true };

	cout << solution(absolutes, signs) << endl;

	return 0;
}

int solution(vector<int> absolutes, vector<bool> signs) {
	int answer = 0;

	for (int i = 0; i < absolutes.size(); i++)
		answer += absolutes[i] * (signs[i] ? 1 : -1);

	return answer;
}