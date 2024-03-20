#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nCount, nDelete;
    vector<int> getCount;
    queue<int> qCount;

    cin >> nCount >> nDelete;

    for (int i = 1; i <= nCount; i++) {
        getCount.push_back(i);
    }

    int nD = nDelete - 1; // 초기에 삭제할 인덱스를 설정

    while (!getCount.empty()) 
    {
        nD = nD % getCount.size(); // 벡터 크기에 맞게 인덱스 조정
        qCount.push(getCount[nD]);
        getCount.erase(getCount.begin() + nD);
        nD += nDelete - 1; // 다음에 삭제할 인덱스 업데이트
    }

    cout << '<';
    while (!qCount.empty()) 
    {
        cout << qCount.front();
        qCount.pop();
        if (!qCount.empty()) {
            cout << ", ";
        }
    }
    cout << '>';

    return 0;
}