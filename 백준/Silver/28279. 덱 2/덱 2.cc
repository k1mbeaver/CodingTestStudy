#include <iostream>
#include <deque>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    deque<int> dq;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int message;
        cin >> message;

        if (message == 1)
        {
            int getX;
            cin >> getX;

            dq.push_front(getX);
        }

        else if(message == 2)
        {
            int getX;
            cin >> getX;

            dq.push_back(getX);
        }

        else if (message == 3)
        {
            if (dq.empty())
            {
                cout << -1 << '\n';
            }

            else
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }

        else if (message == 4)
        {
            if (dq.empty())
            {
                cout << -1 << '\n';
            }

            else
            {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }

        else if (message == 5)
        {
            cout << dq.size() << '\n';
        }

        else if (message == 6)
        {
            if (dq.empty())
            {
                cout << 1 << '\n';
            }

            else
            {
                cout << 0 << '\n';
            }
        }

        else if (message == 7)
        {
            if (dq.empty())
            {
                cout << -1 << '\n';
            }

            else
            {
                cout << dq.front() << '\n';
            }
        }

        else if (message == 8)
        {
            if (dq.empty())
            {
                cout << -1 << '\n';
            }

            else
            {
                cout << dq.back() << '\n';
            }
        }
    }

    return 0;
}