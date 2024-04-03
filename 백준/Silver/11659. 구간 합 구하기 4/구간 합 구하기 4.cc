#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    vector<int> mySum;

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        int getN;
        int getSum = 0;

        cin >> getN;

        if (i == 0)
        {
            mySum.push_back(getN);
            continue;
        }

        getSum = mySum[i - 1] + getN;
        mySum.push_back(getSum);
    }

    for (int k = 0; k < M; k++)
    {
        int i, j = 0;
        int result = 0;

        cin >> i >> j;

        if (j == 1)
        {
            result = mySum[0];
        }

        else if (j != 1 && i == 1)
        {
            result = mySum[j - 1];
        }

        else
        {
            result = mySum[j - 1] - mySum[i - 2];
        }

        cout << result << '\n';
    }

    return 0;
}