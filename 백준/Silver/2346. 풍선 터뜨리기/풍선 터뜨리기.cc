#include <iostream>
#include <deque>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int num;
    int nMove;
    deque<pair<int, int>> dq;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> num;
        dq.push_back(make_pair(i, num));
    }

    for (int i = 0; i < N; i++)
    {
        cout << dq.front().first << '\n';
        nMove = dq.front().second;
        dq.pop_front();

        if (dq.empty())
        {
            break;
        }

        // 왼쪽으로
        if (nMove < 0)
        {
            nMove *= -1;

            if (nMove > 0)
            {
                for (int j = 0; j < nMove; j++)
                {
                    dq.push_front(dq.back());
                    dq.pop_back();
                }
            }
        }

        // 오른쪽으로
        else
        {
            nMove -= 1;

            if (nMove > 0)
            {
                for (int j = 0; j < nMove; j++)
                {
                    dq.push_back(dq.front());
                    dq.pop_front();
                }
            }
        }
    }

    return 0;
}