#include <iostream>
using namespace std;

string solution(string s);

int main()
{
    string s = "qwer";

    cout << solution(s);
    
	return 0;
}

string solution(string s) {
    string answer = "";
    int a = s.size() / 2;
    
    if (s.size() % 2 == 0)
    {
        answer = s[a - 1];
        answer += s[a];
    }
    else
        answer = s[a];

    return answer;
}