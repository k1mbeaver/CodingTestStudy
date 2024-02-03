#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 최소공배수를 구하려면 두 수의 곱에 최대공약수를 나누면 된다.
// 최대공약수는 a % b = 나머지 -> b % 나머지 = (2)나머지 ..... 순으로 해서 마지막 값이 0이 될 때까지 했을 떄의 나머지

int min(int a, int b);
int max(int a, int b);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<long long> vResult;

    int firstSon, firstMom;
    int secondSon, secondMom;
    int resultSon, resultMom;
    int N;

    cin >> firstSon >> firstMom;
    cin >> secondSon >> secondMom;

    resultMom = min(firstMom, secondMom);
    resultSon = (resultMom / firstMom) * firstSon + (resultMom / secondMom) * secondSon;

    N = max(resultSon, resultMom);

    // 분자, 분모의 최대공약수가 분모가 아닐 떄
    if (N <= resultSon)
    {
        resultSon = resultSon / N;
        resultMom = resultMom / N;
    }

    cout << resultSon << ' ' << resultMom << endl;

    return 0;
}

int min(int a, int b)
{
    int result = 0;

    result = (a * b) / max(a, b);

    return result;
}

int max(int a, int b)
{
    int result = 0;
    int num = 1;

    if (a > b)
    {
        while (num != 0)
        {
            num = a % b;
            a = b;
            b = num;
        }

        num = a;
    }

    else
    {
        while (num != 0)
        {
            num = b % a;
            b = a;
            a = num;
        }

        num = b;
    }

    return num;
}