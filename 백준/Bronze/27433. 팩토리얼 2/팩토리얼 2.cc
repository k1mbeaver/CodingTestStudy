#include <iostream>

using namespace std;

long long pibonachi(int i);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    cout << pibonachi(N);

    return 0;
}

long long pibonachi(int i)
{
    if (i <= 1)
    {
        return 1;
    }

    else
    {
        return i * pibonachi(i - 1);
    }
}
