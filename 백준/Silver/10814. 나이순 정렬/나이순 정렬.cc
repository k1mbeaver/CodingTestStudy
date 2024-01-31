#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Info
{
	int Age;
	string Name;
};

bool cmp(pair<int, Info> getX, pair<int, Info> getY)
{
	if (getX.second.Age == getY.second.Age)
	{
		return getX.first < getY.first;
	}

	else
	{
		return getX.second.Age < getY.second.Age;
	}
}

int main()
{
	int N;
	vector<pair<int, Info>> getPair;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int first;
		string second;
		Info myInfo;

		cin >> first >> second;
		myInfo.Age = first;
		myInfo.Name = second;

		getPair.push_back(make_pair(i, myInfo));
	}

	sort(getPair.begin(), getPair.end(), cmp);

	for (int i = 0; i < getPair.size(); i++)
	{ 
		cout << getPair[i].second.Age << " " << getPair[i].second.Name << "\n";
	}

	return 0;
}