#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> getNumber;

	int returnAvg = 0;
	int returnMiddle = 0;

	for (int i = 0; i < 5; i++)
	{
		int getN;

		cin >> getN;

		getNumber.push_back(getN);
		returnAvg += getN;
	}

	returnAvg = returnAvg / getNumber.size();
	
	sort(getNumber.begin(), getNumber.end());

	returnMiddle = getNumber[2];

	cout << returnAvg << endl;
	cout << returnMiddle << endl;

	return 0;
}