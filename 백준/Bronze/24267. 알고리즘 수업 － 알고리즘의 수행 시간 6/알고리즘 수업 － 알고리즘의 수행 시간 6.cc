#include <iostream>

using namespace std;

int main()
{
	long long nCount;

	cin >> nCount;

	nCount = nCount * (nCount - 1) * (nCount - 2) / 6;
	cout << nCount  << endl;
	cout << 3 << endl;

	return 0;
}
