#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nLog = 0;

    unordered_map<string, string> mapLog;

    cin >> nLog;

    for (int i = 0; i < nLog; i++)
    {
        string strName;
        string strLog;

        cin >> strName >> strLog;

        if (strLog == "leave")
        {
            mapLog.erase(strName);
            continue;
        }

        mapLog.insert(make_pair(strName, strLog));
    }

    vector<pair<string, string>> vecLog(mapLog.begin(), mapLog.end());
    sort(vecLog.begin(), vecLog.end(), [](const pair<string, string>& a, const pair<string, string>& b)
        {
            return a.first > b.first;
        });

    for (int i = 0; i < vecLog.size(); i++)
    {
        cout << vecLog[i].first << "\n";
    }

    return 0;
}