#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nCount = 0;
    int nPerson = 0;
    int nCurrent = 1;
    stack<int> sWait;
    bool bLoop = true;
    bool bAfter = false;

    cin >> nCount;

    for (int i = 1; i <= nCount; i++)
    {
        cin >> nPerson;

        // 순번이 아니라면
        if (nPerson != nCurrent)
        {
            sWait.push(nPerson);
        }

        else
        {
            nCurrent++;
        }

        // 대기열이 있으면
        while (!sWait.empty() && sWait.top() == nCurrent)
        {
            sWait.pop();
            nCurrent++;
        }
    }

    if (sWait.empty())
    {
        cout << "Nice";
    }

    else
    {
        cout << "Sad";
    }

    return 0;
}
