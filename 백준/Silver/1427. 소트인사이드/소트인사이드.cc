#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(int i, int j)
{
	return j < i;
}

int main()
{
	string strN;
	vector<int> getV;

	cin >> strN;

	for (int i = 0; i < strN.size(); i++)
	{
		int getN = strN[i] - '0';
		getV.push_back(getN);
	}

	sort(getV.begin(), getV.end(), compare);

	for (int i = 0; i < getV.size(); i++)
	{
		cout << getV[i];
	}

	return 0;
}