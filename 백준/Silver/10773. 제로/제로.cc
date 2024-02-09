#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nCount;
    int nResult = 0;
    stack<int> myStack;

    cin >> nCount;

    for (int i = 0; i < nCount; i++)
    {
        int getN;
        cin >> getN;

        if (getN == 0)
        {
            nResult -= myStack.top();
            myStack.pop();
        }

        else
        {
            nResult += getN;
            myStack.push(getN);
        }
    }

    cout << nResult << '\n';

    return 0;
}
