#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr);

int main()
{
    vector<int> arr = { 1,1,3,3,0,1,1 };
    solution(arr);

	return 0;
}

vector<int> solution(vector<int> arr)
{
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    vector<int> answer = arr;
    return answer;
}