#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x1, x2, x3, y1, y2, y3 = 0;
    int x, y = 0;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if (x1 == x2)
    {
        x = x3;
    }

    else if (x1 == x3)
    {
        x = x2;
    }

    else
    {
        x = x1;
    }

    if (y1 == y2)
    {
        y = y3;
    }

    else if (y1 == y3)
    {
        y = y2;
    }

    else
    {
        y = y1;
    }

    cout << x << ' ' << y << endl;

    return 0;
}
