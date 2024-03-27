#include <iostream>
#include <unordered_map>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    int plus = 0;
    int middle = 0;
    int nMax = -4000;
    int nMin = 4000;
    int nFrequency = 0;
    unordered_map<int, int> myMap;
    vector<int> myVector;
    vector<int> myModes;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int getN;

        cin >> getN;
        myMap[getN] += 1;
        myVector.push_back(getN);

        plus += getN;

        if (nMax < getN)
        {
            nMax = getN;
        }

        if (nMin > getN)
        {
            nMin = getN;
        }
    }

    // 산술평균 출력 (plus 변수를 사용)
    double mean = static_cast<double>(plus) / N;
    if (mean < 0)
    {
        mean -= 0.5;
    }

    else
    {
        mean = round(mean);
    }

    cout << static_cast<int>(mean) << '\n';
    
    // 중앙값 출력 (myVector을 오름차순으로 정렬하고, N을 2로 나눈 값을 사용해 myVector[나눈 값] 출력
    sort(myVector.begin(), myVector.end());
    middle = N / 2;
    cout << myVector[middle] << '\n';

    // 최빈값 출력 (myMap의 second 값이 제일 높은 애를 사용, 만약 여러 개 있으면 최빈값 중 두 번쨰로 작은 값을 출력
    for (const auto &pair : myMap)
    {
        if (pair.second > nFrequency)
        {
            nFrequency = pair.second;
        }
    }

    for (const auto& pair : myMap)
    {
        if (pair.second == nFrequency)
        {
            myModes.push_back(pair.first);
        }
    }

    sort(myModes.begin(), myModes.end());

    if (myModes.size() == 1)
    {
        cout << myModes[0] << '\n';
    }

    else
    {
        cout << myModes[1] << '\n';
    }

    // 범위 출력 (nMax, nMin 사용)
    cout << nMax - nMin << '\n';

    return 0;
}
