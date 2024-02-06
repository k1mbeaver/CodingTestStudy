#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nCount;
    vector<int> getX;
    vector<int> getY;
    int nWidth, nHeight;
    int result;

    cin >> nCount;

    if (nCount <= 1)
    {
        int myX, myY;
        cin >> myX >> myY;
        result = 0;
    }

    else
    {
        for (int i = 0; i < nCount; i++)
        {
            int myX, myY;

            cin >> myX >> myY;

            getX.push_back(myX);
            getY.push_back(myY);
        }

        sort(getX.begin(), getX.end());
        sort(getY.begin(), getY.end());

        nWidth = getX[getX.size() - 1] - getX[0];
        nHeight = getY[getY.size() - 1] - getY[0];

        result = nWidth * nHeight;
    }

    cout << result << endl;

    return 0;
}