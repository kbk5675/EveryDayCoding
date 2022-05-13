#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int a = 118372;
	int sum = 0;
	int cnt = 1;
	vector<int> v;

	while (a)
	{
		v.push_back(a % 10);
		a /= 10;
	}
	sort(v.begin(), v.end(), greater<>());

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	
	for (int i = v.size()-1; i >= 0; i--)
	{
		sum += v[i] * cnt;
		cnt *= 10;
	}

	cout << sum << endl;



	
	

	return 0;
}