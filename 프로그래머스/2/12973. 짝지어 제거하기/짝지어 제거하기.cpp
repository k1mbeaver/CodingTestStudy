#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int solution(string s)
{
    int answer = -1;
    stack<int> stackS;
    
    // 문자열의 길이가 홀수면 0
    if(s.size() % 2 == 1)
    {
        answer = 0;
        return answer;
    }
    
    for(int i = 0; i < s.size(); i++)
    {
        if(stackS.empty())
        {
            stackS.push(s[i]);
            continue;
        }
        
        if(stackS.top() == s[i])
        {
            stackS.pop();
        }
        
        else
        {
            stackS.push(s[i]);
        }
    }
    
    if(stackS.empty())
    {
        answer = 1;
    }
    
    else
    {
        answer = 0;
    }
    
    return answer;
}