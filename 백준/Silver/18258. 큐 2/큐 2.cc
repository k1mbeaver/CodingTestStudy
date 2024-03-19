#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nCount = 0;
    int getN = 0;
    queue<int> qAnswer;

    cin >> nCount;

    for (int i = 0; i < nCount; i++)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "push")
        {
            int getN;
            cin >> getN;

            qAnswer.push(getN);
        }

        else if (cmd == "pop")
        {
            if (qAnswer.empty())
            {
                cout << -1 << '\n';
                continue;
            }

            cout << qAnswer.front() << '\n';
            qAnswer.pop();
        }

        else if (cmd == "size")
        {
            cout << qAnswer.size() << '\n';
        }

        else if (cmd == "empty")
        {
            cout << qAnswer.empty() << '\n';
        }

        else if (cmd == "front")
        {
            if (qAnswer.empty())
            {
                cout << -1 << '\n';
                continue;
            }

            cout << qAnswer.front() << '\n';
        }

        else if (cmd == "back")
        {
            if (qAnswer.empty())
            {
                cout << -1 << '\n';
                continue;
            }

            cout << qAnswer.back() << '\n';
        }
    }
}