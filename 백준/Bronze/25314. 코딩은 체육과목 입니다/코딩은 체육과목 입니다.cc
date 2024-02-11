#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nByte;
    string strLong;

    cin >> nByte;

    for (int i = 1; i <= nByte / 4; i++)
    {
        strLong = strLong + "long ";
    }

    strLong = strLong + "int";

    cout << strLong << endl;

    return 0;
}
