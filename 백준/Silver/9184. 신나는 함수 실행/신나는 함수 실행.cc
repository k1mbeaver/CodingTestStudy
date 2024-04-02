#include <iostream>

using namespace std;

int myArr[21][21][21];
int function1(int a, int b, int c);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    
    while (1)
    {
        cin >> a >> b >> c;

        if (a == -1 && b == -1 && c == -1)
        {
            break;
        }

        cout << "w(" << a << ", " << b << ", " << c << ") = " << function1(a, b, c) << '\n';
    }

    return 0;
}

int function1(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return 1;
    }

    else if (a > 20 || b > 20 || c > 20)
    {
        return function1(20, 20, 20);
    }

    else if (myArr[a][b][c] != 0)
    {
        return myArr[a][b][c];
    }

    else if (a < b && b < c)
    {
        myArr[a][b][c] = function1(a, b, c - 1) + function1(a, b - 1, c - 1) - function1(a, b - 1, c);
    }

    else
    {
        myArr[a][b][c] = function1(a - 1, b, c) + function1(a - 1, b - 1, c) + function1(a - 1, b, c - 1) - function1(a - 1, b - 1, c - 1);
    }

    return myArr[a][b][c];
}