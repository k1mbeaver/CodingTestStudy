#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string s) {
    int answer = 0;
    bool flag = false;
    
    for(int i = 0; i < s.size(); i++)
    {
        stack<char> myStack;
        
        for(int k = 0; k < s.size(); k++)
        {
            if(s[k] == '[' || s[k] == '{' || s[k] == '(')
            {
                myStack.push(s[k]);
                flag = true;
            }
            
            else 
            {
                if(s[k] == ']' && myStack.top() == '[')
                {
                    myStack.pop();
                }
                
                else if(s[k] == '}' && myStack.top() == '{')
                {
                    myStack.pop();
                }
                
                else if(s[k] == ')' && myStack.top() == '(')
                {
                    myStack.pop();
                }
            }
        }
        
        if(myStack.empty() && flag)
        {
            answer++;
        }
        
        char GetFront = s[0];
        s.erase(s.begin());
        s.push_back(GetFront);
        flag = false;
    }
    
    return answer;
}