#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> BestCode(vector<int> array, vector<vector<int>> commands);

int main()
{
    vector<int> array = { 1,5,2,6,3,7,4 };
    vector<vector<int>> commands = { {2,5,3}, {4,4,1}, {1,7,3} };
    vector<int> temp;
    vector<int> answer;
    
    for (int i = 0; i < commands.size(); i++)
    {
        // array를 자를 시작과 끝을 정함.
        int start = commands[i][0] - 1;
        int end = commands[i][1] - 1;
        int num = commands[i][2] - 1;

        // array를 temp에 넣어줌.
        for (int i = start; i <= end; i++)
            temp.push_back(array[i]);

        // 자른 데이터를 정렬해준 vector값
        sort(temp.begin(), temp.end());
        // 변수 num 을 최종적으로 나와야할 숫자로 지정.
        num = temp[num];

        // answer 벡터값에 num값 넣어주기.
        answer.push_back(num);

        cout << "temp" << endl;
        for (int i = 0; i < temp.size(); i++)
            cout << temp[i] << " ";
        
        cout << "\nanswer" << endl;
        for (int i = 0; i < answer.size(); i++)
            cout << answer[i] << " ";
        
        cout << endl;


        temp.clear();
    }

    BestCode(array, commands);

    return 0;
}

vector<int> BestCode(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;

    for (int i = 0; i < commands.size(); i++) {
        temp = array;
        sort(temp.begin() + commands[i][0] - 1, temp.begin() + commands[i][1]);
        answer.push_back(temp[commands[i][0] + commands[i][2] - 2]);
    }

    return answer;
}