#include <iostream>
using namespace std;
string solution(string s, int n);

int main()
{
    string s = "a B Z z";
    int n = 1;

    cout << solution(s, n) << endl;

	return 0;
}

string solution(string s, int n) {

    for (auto& a : s) {
        if (islower(a)) {
            if (!islower(a += n % 26))
                a -= 26;
        }
        else if (isupper(a)) {
            if (!isupper(a += n % 26))
                a -= 26;
        }
    }
    
    return s;
}