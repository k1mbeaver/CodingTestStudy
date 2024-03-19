#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nCount = 0;
    bool bBack = false;
    queue<int> qNumber;

    cin >> nCount;

    for (int i = 1; i <= nCount; i++)
    {
        qNumber.push(i);
    }

    while (qNumber.size() > 1)
    {
        // 버리기
        if (!bBack)
        {
            qNumber.pop();
            bBack = true;
        }

        // 뒤로가기
        else
        {
            qNumber.push(qNumber.front());
            qNumber.pop();
            bBack = false;
        }
    }

    cout << qNumber.front() << '\n';

    return 0;
}
