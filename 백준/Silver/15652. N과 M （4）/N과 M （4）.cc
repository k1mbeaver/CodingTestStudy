#include <iostream>

#define MAX 9

using namespace std;

int N, M;
int myArray[MAX] = { 0 };
bool myVisit[MAX] = { 0 };

void DFS(int depth, int lastNum);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    // 처음에는 0 , 1 을 넣는다.
    DFS(0, 1);

    return 0;
}

void DFS(int depth, int lastNum)
{
    // 만약 한 순열을 찾았다면
    if (depth == M)
    {
        for (int i = 0; i < M; i++)
        {
            cout << myArray[i] << ' ';
        }

        cout << '\n';
        return;
    }

    // 아직 수열 찾기 진행중...

    for (int i = lastNum; i <= N; i++)
    {
        if (!myVisit[i])
        {
            // 재귀 함수에 넣었을 때 중복이 되지 않기 위해 true
            //myVisit[i] = true;

            // 현재 차례의 수를 표시하기 위해 넣어
            myArray[depth] = i;

            // 재귀 함수에 넣어서 다음 숫자를 찾으러간다.
            DFS(depth + 1, i);

            // 재귀 함수가 끝났다면 다음 수열 찾기에 사용하기 위해 다시 false
            //myVisit[i] = false;
        }
    }
}