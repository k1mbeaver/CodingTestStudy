#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bool bEnd = false;
    vector<string> result;

    while (!bEnd)
    {
        int Length1, Length2, Length3;
        vector<int> getLength;

        cin >> Length1 >> Length2 >> Length3;

        if (Length1 == 0)
        {
            bEnd = true;
        }

        else
        {
            getLength.push_back(Length1);
            getLength.push_back(Length2);
            getLength.push_back(Length3);

            sort(getLength.begin(), getLength.end());

            // 삼각형의 조건 만족하는 경우
            if (getLength[0] + getLength[1] > getLength[2])
            {
                // 세 변의 길이가 모두 같은 경우
                if (getLength[0] == getLength[1] && getLength[1] == getLength[2])
                {
                    result.push_back("Equilateral");
                }

                // 두 변의 길이만 같은 경우
                else if (getLength[0] == getLength[1] || getLength[1] == getLength[2])
                {
                    result.push_back("Isosceles");
                }

                // 세 변의 길이가 모두 다른 경우
                else
                {
                    result.push_back("Scalene");
                }
            }

            else
            {
                result.push_back("Invalid");
            }
        }
    }

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << '\n';
    }

    return 0;
}