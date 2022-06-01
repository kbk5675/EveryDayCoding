#include <iostream>
using namespace std;

bool solution(string s);

int main()
{
    string s1 = "pPoooyY";
    string s2 = "Pyy";

    cout << solution(s1);

	return 0;
}

bool solution(string s)
{
    int yCnt = 0;
    int pCnt = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 89 || s[i] == 121)
            yCnt++;
        else if (s[i] == 80 || s[i] == 112)
            pCnt++;
    }

    return yCnt == pCnt ? true : false;
}