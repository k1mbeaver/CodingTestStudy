#include <string>
#include <vector>

using namespace std;

int func(int n)
{
    vector<int> returnVector;
    
    returnVector.push_back(0);
    returnVector.push_back(1);
    
    for(int i = 2; i <= n; i++)
    {
        // % 1234567을 하는 이유는 오버플로우를 막기 위해서
        returnVector.push_back((returnVector[i - 1] + returnVector[i - 2]) % 1234567);
    }
    
    // 나머지 값이 들어가있음
    return returnVector[n];
}

int solution(int n) {
    int answer = 0;
    
    answer = func(n);
    
    return answer;
}