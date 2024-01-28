#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> getNumber;

	int nCount = 0;

	cin >> nCount;

	for (int i = 0; i < nCount; i++)
	{
		int getN;

		cin >> getN;

		getNumber.push_back(getN);
	}

	sort(getNumber.begin(), getNumber.end());

	for (int i = 0; i < nCount; i++)
	{
		cout << getNumber[i] << "\n"; // endl은 출력 버퍼를 비우는 작업을 추가로 수행하기 떄문에 느릴 수 있따.
	}

	return 0;
}