#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int currentAnswer = 0;
    
    for(int i = 0; i < s.size(); i++)
    {
        currentAnswer = 0;
        
        if(i == 0)
        {
            answer.push_back(-1);
            continue;
        }
        
        for(int j = 0; j < i; j++)
        {
            if(s[i] == s[j])
            {
                currentAnswer = i - j;
            }
        }
        
        if(currentAnswer == 0)
        {
            answer.push_back(-1);
            continue;
        }
        answer.push_back(currentAnswer);
    }
    
    return answer;
}