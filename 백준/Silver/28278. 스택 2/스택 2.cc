#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nCount;
    stack<int> myStack;

    cin >> nCount;

    for (int i = 0; i < nCount; i++)
    {
        int N;
        cin >> N;

        switch (N)
        {
            // 정수를 스택에 넣는다.
        case 1:
            int getN;
            cin >> getN;
            myStack.push(getN);
            break;

            // 스택에 정수가 있다면 맨 위 정수를 뺴고 출력 없다면 -1
        case 2:
            if (myStack.empty() != true)
            {
                cout << myStack.top() << '\n';
                myStack.pop();
            }

            else
            {
                cout << -1 << '\n';
            }
            break;

            // 스택에 들어있는 정수의 갯수를 출력
        case 3:
            cout << myStack.size() << '\n';
            break;

            // 스택이 비어있으면 1, 아니면 0
        case 4:
            if (myStack.empty() == true)
            {
                cout << 1 << '\n';
            }

            else
            {
                cout << 0 << '\n';
            }
            break;

            // 스택에 정수가 있다면 맨 위의 정수를 출력, 없다면 -1 대신 출력
        case 5:
            if (myStack.empty() != true)
            {
                cout << myStack.top() << '\n';
            }

            else
            {
                cout << -1 << '\n';
            }
            break;
        }
    }

    return 0;
}
