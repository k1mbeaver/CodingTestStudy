#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    int result = 0;
    cin >> N;

    if (N == 1)
    {
        int getN;
        cin >> getN;

        result = getN * getN;
    }

    else
    {
        int maxN = 0;
        int minN = 1000000;

        for (int i = 0; i < N; i++)
        {
            int getN;
            cin >> getN;

            if (getN > maxN)
            {
                maxN = getN;
            }

            if (getN < minN)
            {
                minN = getN;
            }
        }

        result = minN * maxN;
    }

    cout << result;

    return 0;
}
