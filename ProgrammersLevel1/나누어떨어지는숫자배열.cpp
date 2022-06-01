#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor);

int main()
{
    vector<int> arr1 = { 5,8,7,10 };
    vector<int> arr2 = { 2,36,1,3 };

    solution(arr1, 5);
    
    return 0;
}

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;

    sort(arr.begin(), arr.end());
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] >= divisor && arr[i] % divisor == 0)
            answer.push_back(arr[i]);
    }

    return answer.empty() ? vector<int>(1, -1) : answer;
}