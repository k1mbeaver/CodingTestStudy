#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int result = 1;

    cin >> N;

    if (N != 0)
    {
        for (int i = 1; i <= N; i++)
        {
            result *= i;
        }
    }

    cout << result;

    return 0;
}