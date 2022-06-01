#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool solution(string s);

int main()
{
    string s1 = "a234";
    string s2 = "1234";

    cout << solution(s1);

    return 0;
}

bool solution(string s) {
    bool answer = true;

   /* if (s.size() != 4 && s.size() !=6)
        answer = false;*/



    for (int i = 0; i < s.size(); i++)
    {
        if (!(s[i] >= '0' && s[i] <= '9'))
            answer = false;
    }

    return s.size() == 4 || s.size() == 6 ? answer : false;
}