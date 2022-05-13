#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(int n, int m);

int main()
{
    int n = 2;
    int m = 5;

	return 0;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    int c;
    while (m != 0)
    {
        c = n > m ? n % m : m % n;
        n = m;
        m = c;
    }
    
    return answer;
}