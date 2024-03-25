#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int result = 0;
    set<string> mySet;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string myStr;
        cin >> myStr;

        if (myStr == "ENTER")
        {
            result += mySet.size();
            mySet.clear();
            continue;
        }

        else
        {
            mySet.insert(myStr);
        }
    }

    result += mySet.size();

    cout << result << endl;

    return 0;
}
