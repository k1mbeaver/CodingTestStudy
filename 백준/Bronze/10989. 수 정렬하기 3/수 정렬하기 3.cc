#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); // c와 c++ 표준 stream의 동기화를 비활성화 = C++ 스타일 코드만 사용하면 기존 동기화 과정에서 필요하던 시간 절약 가능
	cin.tie(0);

	int nCount = 0;
	int arr[10001] = { 0 };

	cin >> nCount;

	for (int i = 0; i < nCount; i++)
	{
		int getN;

		cin >> getN;
		arr[getN] += 1;
	}

	for (int i = 1; i <= 10000; i++)
	{
		for (int k = 0; k < arr[i]; k++)
		{
			cout << i << "\n";
		}
	}

	return 0;
}