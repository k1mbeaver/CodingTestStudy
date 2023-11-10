#include <iostream>
#include <stack>

using namespace std;

int solution(int n)
{
    int ans = 0;
    int nParameter = n;
    stack<int> DevideN;
    
    DevideN.push(nParameter);
    
    while(nParameter != 1)
    {
        nParameter /= 2;
        DevideN.push(nParameter);
    }
    
    while(!(DevideN.empty()))
    {
        // 홀수이면 ans++, 짝수이면 넘어감
        if(DevideN.top() % 2 != 0)
        {
            ans++;
        }
        
        DevideN.pop();
    }

    return ans;
}