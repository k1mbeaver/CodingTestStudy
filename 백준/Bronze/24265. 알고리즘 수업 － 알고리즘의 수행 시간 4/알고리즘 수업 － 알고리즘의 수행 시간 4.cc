#include <iostream>

using namespace std;

int main()
{
	long long nCount;

	cin >> nCount;

	// 등차수열의 공식 1 + 2 + 3 + 4 + 5 + 6 ..... (n - 2) + (n - 1)
	// n(n - 1) / 2
	nCount = nCount * (nCount - 1) / 2;
	cout << nCount  << endl;
	cout << 2 << endl;

	return 0;
}