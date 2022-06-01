#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes);

int main()
 {
    vector<vector<int>> sizes = { {60, 50},{30, 70},{60, 30},{80, 40} };
    solution(sizes);

    return 0;
}

int solution(vector<vector<int>> sizes) {
    int answer = 0;

    vector<int> W;
    vector<int> H;
    vector<int> temp;
    int maxSize;
    bool moreBig = false;

    // 가로 세로 vector로 분리.
    for (int i = 0; i < sizes.size(); i++)
    {
            W.push_back(sizes[i][0]);
            H.push_back(sizes[i][1]);
    }

    // 가로 세로 오름차순으로 정렬.
    sort(W.begin(), W.end());
    sort(H.begin(), H.end());

    // 가로 세로에서 가장 큰 수 찾고 가로에 큰 수 있으면 moreBig true 세로에 큰 수가 있으면 false.
    maxSize = W.back() > H.back() ? W.back() : H.back();
    moreBig = W.back() > H.back() ? true : false;


    if (moreBig == true)
    {
        for (int i = 0; i < sizes.size(); i++)
        {
            if (sizes[i][0] < sizes[i][1])
                sizes[i][1] = sizes[i][0];
            
            temp.push_back(sizes[i][1]);
        }
        sort(temp.begin(), temp.end());
        answer = maxSize * temp.back();
    }
    else
    {
        for (int i = 0; i < sizes.size(); i++)
        {
            if (sizes[i][0] > sizes[i][1])
                sizes[i][0] = sizes[i][1];

            temp.push_back(sizes[i][0]);
        }
        sort(temp.begin(), temp.end());
        answer = maxSize * temp.back();
    }

    return answer;
}