#include <iostream>
#include <vector>
#include <numeric>
#include "Test2.h"
using namespace std;

int solution(vector<int> numbers);

int main()
{
	vector<int> numbers = { 1, 2, 3, 4, 6, 7, 8, 0 };

	cout << solution(numbers) << endl;

	return 0;
}

int solution(vector<int> numbers) {
	return 45 - accumulate(numbers.begin(), numbers.end(), 0);
}
