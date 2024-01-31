#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool cmp(pair<int, int> getX, pair<int, int> getY)
{
	if (getX.second == getY.second)
	{
		return getX.first < getY.first;
	}

	else
	{
		return getX.second < getY.second;
	}
}

int main()
{
	int N;
	vector<pair<int, int>> getPair;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int X, Y;
		cin >> X >> Y;

		getPair.push_back(make_pair(X, Y));
	}

	sort(getPair.begin(), getPair.end(), cmp);

	for (int i = 0; i < getPair.size(); i++)
	{ 
		cout << getPair[i].first << " " << getPair[i].second << "\n";
	}

	return 0;
}