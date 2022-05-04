#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion);
string solution2(vector<string> participant, vector<string> completion);

int main()
{
	vector<string> participant = { "leo", "kiki", "eden" };
	vector<string> completion = { "eden", "kiki" };
	
	cout << solution(participant, completion) << endl;
	cout << solution2(participant, completion) << endl;

	return 0;
}

// Sort/Loop을 이용한 방법
string solution(vector<string> participant, vector<string> completion) 
{ 
	string answer = "";
	sort(participant.begin(), participant.end());
	sort(completion.begin(), completion.end());
	int i = 0; for (; i < completion.size(); i++)
		if (participant[i] != completion[i]) break; 

	return participant[i]; 
}

// hash Map을 이용한 방법
string solution2(vector<string> participant, vector<string> completion) 
{
	string answer = ""; 
	unordered_map<string, int> map; 

	for (auto player : participant) 
	{
			map[player]++; 
	} 

	for (auto player : completion) 
		map[player]--;
		
	for (auto player : participant)
	{
		if (map[player] > 0)
		{
			answer = player;
			break;
		}
	}
		
		return answer; 
}


