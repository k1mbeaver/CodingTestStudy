#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string myStr;
    unordered_map<string, string> mapS;

    cin >> myStr;

    for (int i = 1; i <= myStr.size(); i++)
    {
        for (int k = 0; k < myStr.size(); k++)
        {
            string getStr;
            getStr = myStr.substr(k, i);

            if (mapS.find(getStr) == mapS.end()) // 만약 반복 안된다면
            {
                mapS[getStr]; // 맵에 넣는다
            }
        }
    }

    cout << mapS.size() << endl;

    return 0;
}