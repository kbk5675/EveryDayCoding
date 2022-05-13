#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr);

int main()
{
	vector<int> arr = { 4,3,2,1 };

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << endl;
	}

		return 0;
}

vector<int> solution(vector<int> arr) {
	vector<int> answer = arr;

	int nMin = *min_element(arr.begin(), arr.end());
	int pos = find(answer.begin(), answer.end(), nMin) - answer.begin();
	answer.erase(answer.begin() + pos);

	return answer.empty() ? vector<int>(1, -1) : answer;
}