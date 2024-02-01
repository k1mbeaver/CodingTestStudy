#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unordered_map<int, int> myCard;

    int nMyCard, nDefaultCard;

    cin >> nMyCard;

    for (int i = 0; i < nMyCard; i++)
    {
        int getN;
        cin >> getN;
        
        myCard[getN]++;
    }

    cin >> nDefaultCard;

    for (int i = 0; i < nDefaultCard; i++)
    {
        int getN;
        cin >> getN;

        cout << myCard[getN] << ' ';
    }

    return 0;
}