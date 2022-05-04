#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int solution(vector<int> a);

int main()
{
    vector<int> a = { 1,2,3,4 };
    //vector<int> b = { 1,2,7,6,4 };

    cout << solution(a) << endl;

	return 0;
}


int solution(vector<int> nums) {
    int answer = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] <= nums[i])
                continue;
            for (int z = 0; z < nums.size(); z++)
            {
                if (nums[z] <= nums[i] || nums[z] <= nums[j])
                    continue;

                for (int cnt = 2; cnt < sqrt(nums[i] + nums[j] + nums[z]); cnt++)
                {
                    if ((nums[i] + nums[j] + nums[z]) % cnt == 0)
                        continue;
                    else
                        answer++;
                }
                
            }
        }
    }

    return answer;
}