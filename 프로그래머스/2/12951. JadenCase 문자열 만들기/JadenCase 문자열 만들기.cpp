#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool bletter = true;
    
    for(int i = 0; i < s.size(); i++)
    {
        // 공백이면 넘어가기
        if(s[i] == ' ')
        {
            bletter = true;
            continue;
        }
        
        // 숫자일 때
        if(s[i] > 47 && s[i] < 58)
        {
            bletter = false;
            continue;
        }
        
        // 문자열인데 첫번째 일 때
        else if(s[i] > 96 && bletter == true)
        {
            s[i] = s[i] - 32;
            bletter = false;
        }
        
        // 문자열인데 첫번째가 대문자 일 때
        else if(s[i] > 64 && s[i] < 91 && bletter == true)
        {
            bletter = false;
        }
        
        // 문자열인데 첫번째가 아닌데 대문자 일 때
        else if(s[i] > 64 && s[i] < 91 && bletter == false)
        {
            s[i] = s[i] + 32;
        }
        
        // 문자열인데 첫번째가 아닐 때
        else
        {
            continue;
        }
    }
    
    answer = s;
    return answer;
}