#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int nCount = 0;
	vector<int> myNum;

	cin >> nCount;

	for (int i = 0; i < nCount; i++)
	{
		int getNum = 0;
		cin >> getNum;
		myNum.push_back(getNum);
	}

	sort(myNum.begin(), myNum.end());


	for (int i = 0; i < myNum.size(); i++)
	{
		cout << myNum[i] << endl;
	}

	return 0;
}