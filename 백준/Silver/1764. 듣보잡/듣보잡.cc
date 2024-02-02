#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nNotHear = 0;
    int nNotSee = 0;
    int nResult = 0;

    unordered_map<string, string> NotHear;
    vector<string> vResult;

    cin >> nNotHear >> nNotSee;

    for (int i = 0; i < nNotHear; i++)
    {
        string strNotHear;
        cin >> strNotHear;

        NotHear.insert(make_pair(strNotHear, ""));
    }

    for (int i = 0; i < nNotSee; i++)
    {
        string strNotSee;
        cin >> strNotSee;

        if (NotHear.find(strNotSee) != NotHear.end())
        {
            vResult.push_back(strNotSee);
            nResult++;
        }
    }

    cout << nResult << "\n";

    sort(vResult.begin(), vResult.end());

    for (int i = 0; i < vResult.size(); i++)
    {
        cout << vResult[i] << "\n";
    }


    return 0;
}