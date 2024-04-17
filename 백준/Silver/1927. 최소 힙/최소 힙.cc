#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> result;
    int N, X;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> X;

        if (X != 0)
        {
            pq.push(X);
        }

        else
        {
            if (pq.empty())
            {
                result.push_back(0);
            }

            else
            {
                result.push_back(pq.top());
                pq.pop();
            }
        }
    }

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << '\n';
    }

    return 0;
}