#include <iostream>
#include <vector>

using namespace std;

int fib(int n, int& nCount) 
{
    if (n == 1 || n == 2)
    {
        return 1;
    }

    else
    {
        nCount++;
        return (fib(n - 1, nCount) + fib(n - 2, nCount));
    }
}

int fibonacci(int n, int& nCount) 
{
    vector<int> f;

    f.push_back(1);
    f.push_back(1);

    for (int i = 2; i < n; i++)
    {
        f.push_back(f[i - 1] + f[i - 2]);
        nCount++;
    }
    return f[n - 1];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int oneCount = 1;
    int twoCount = 0;

    cin >> N;
    fib(N, oneCount);
    fibonacci(N, twoCount);
    cout << oneCount << " " << twoCount;

    return 0;
}