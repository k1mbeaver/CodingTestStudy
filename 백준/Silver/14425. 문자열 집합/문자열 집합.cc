#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nGive;
    int nFind;
    int returnFind = 0;

    unordered_map<string, bool> mapFind;

    cin >> nGive >> nFind;

    for (int i = 0; i < nGive; i++)
    {
        string strGive;
        cin >> strGive;
        mapFind.insert(make_pair(strGive, false));
    }

    for (int i = 0; i < nFind; i++)
    {
        string strGive;
        cin >> strGive;

        auto it = mapFind.find(strGive);

        if (it != mapFind.end())
        {
            returnFind++;
        }
    }

    cout << returnFind << endl;

    return 0;
}