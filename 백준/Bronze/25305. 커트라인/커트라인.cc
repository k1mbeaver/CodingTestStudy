#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(int i, int j)
{
	return j < i;
}

int main()
{
	vector<int> getStudent;
	int StudentNumber;
	int AwardStudent;

	cin >> StudentNumber >> AwardStudent;

	for (int i = 0; i < StudentNumber; i++)
	{
		int getNumber;

		cin >> getNumber;

		getStudent.push_back(getNumber);
	}

	sort(getStudent.begin(), getStudent.end(), compare);
	

	cout << getStudent[AwardStudent - 1];

	return 0;
}