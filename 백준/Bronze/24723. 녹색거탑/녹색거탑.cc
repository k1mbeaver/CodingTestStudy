#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int result = 1;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        result *= 2;
    }

    cout << result;

    return 0;
}