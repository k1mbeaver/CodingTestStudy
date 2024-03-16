#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nCount = 0;

    cin >> nCount;

    for (int i = 0; i < nCount; i++)
    {
        string strTest;
        stack<char> myStack;
        cin >> strTest;

        for (int j = 0; j < strTest.size(); j++)
        {
            if (myStack.empty())
            {
                myStack.push(strTest[j]);
            }

            else
            {
                if (myStack.top() == '(' && strTest[j] == ')')
                {
                    myStack.pop();
                }

                else
                {
                    myStack.push(strTest[j]);
                }
            }
        }

        if (myStack.empty())
        {
            cout << "YES" << "\n";
        }

        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
