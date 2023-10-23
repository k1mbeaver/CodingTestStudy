#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> test;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(')
        {
            test.push(s[i]);
        }
        
        else if(s[i] == ')')
        {
            if(test.empty())
            {
                answer = false;
                return answer;
            }
            
            else
            {
                test.pop();
            }
        }
    }
    
    if(test.empty())
    {
        answer = true;
    }
    
    else
    {
        answer = false;
    }
    
    return answer;
}