#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(vector<string> seoul);

int main()
{
    vector<string> seoul = { "Jane","Kim", "fda", "fdfad", "gdaf","fdad"};

    cout << solution(seoul);

	return 0;
}

string solution(vector<string> seoul) {
    string answer = "김서방은 ";

    for (int i = 0; i < seoul.size(); i++) {
        if (seoul[i] == "Kim")
        {
            answer += to_string(i) + "에 있다";
            break;
        }
    }
    return answer;
}