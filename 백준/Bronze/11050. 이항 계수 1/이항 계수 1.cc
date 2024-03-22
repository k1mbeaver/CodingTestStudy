#include <iostream>
using namespace std;

int myFactorial(int n);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int K;
    int result;

    cin >> N >> K;

    // 이항계수 = N! / (N - K)!K!
    result = myFactorial(N) / (myFactorial(N - K) * myFactorial(K));

    cout << result;
    return 0;
}

int myFactorial(int n)
{
    int getResult = 1;

    for (int i = 1; i <= n; i++)
    {
        getResult *= i;
    }

    return getResult;
}