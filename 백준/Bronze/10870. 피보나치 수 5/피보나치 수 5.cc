#include <iostream>

using namespace std;

int pibonachi(int i);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    cout << pibonachi(N);

    return 0;
}

int pibonachi(int i)
{
    if (i == 0)
    {
        return 0;
    }

    else if (i == 1)
    {
        return 1;
    }

    else
    {
        return pibonachi(i - 2) + pibonachi(i - 1);
    }
}
