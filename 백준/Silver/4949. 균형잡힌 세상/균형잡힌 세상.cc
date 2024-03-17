#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nCount = 0;
    bool isLoop = true;

    while (isLoop)
    {
        string strTest;
        stack<char> myStack;
        bool bYes = false;
        getline(cin, strTest);

        if (strTest[0] == '.')
        {
            break;
        }

        for (int j = 0; j < strTest.size(); j++)
        {
            if (strTest[j] == '(' || strTest[j] == '[')
            {
                myStack.push(strTest[j]);
            }

            else if (strTest[j] == ')')
            {
                if (!myStack.empty() && myStack.top() == '(')
                {
                    myStack.pop();
                }

                else
                {
                    bYes = true;
                    break;
                }
            }

            else if (strTest[j] == ']')
            {
                if (!myStack.empty() && myStack.top() == '[')
                {
                    myStack.pop();
                }

                else
                {
                    bYes = true;
                    break;
                }
            }
        }

        if (bYes == false && myStack.empty())
        {
            cout << "yes" << "\n";
        }

        else
        {
            cout << "no" << "\n";
        }
    }

    return 0;
}
