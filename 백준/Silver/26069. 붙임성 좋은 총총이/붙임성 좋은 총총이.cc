#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    set<string> mySet;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string strA;
        string strB;

        cin >> strA >> strB;

        // 만약 총총이를 만났을 경우
        if (strA == "ChongChong" || strB == "ChongChong")
        {
            // 그런데 이미 춤을 추고 있는 사람이다? 그럼 넘어가
       
            // 춤을 추고 있지않은 사람이다! 그럼 춤을 추게하자
            if (strA == "ChongChong")
            {
                mySet.insert(strB);
            }

            else if (strB == "ChongChong")
            {
                mySet.insert(strA);
            }
        }

        // 앞이 춤을 추고있거나
        else if (mySet.find(strA) != mySet.end())
        {
            mySet.insert(strB);
        }

        // 뒤가 춤을 추고있을 때
        else if (mySet.find(strB) != mySet.end())
        {
            mySet.insert(strA);
        }
    }

    cout << mySet.size() + 1 << endl;

    return 0;
}
