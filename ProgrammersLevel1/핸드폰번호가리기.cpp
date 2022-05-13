#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string pn = "01033334444";

	for (int i = 0; i < pn.size() - 4; i++)
		pn[i] = '*';

	cout << pn << endl;
	
	
	return 0;
}