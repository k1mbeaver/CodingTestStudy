#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    
    for(int i = 0; i < absolutes.size(); i++)
    {
        int nAnswer = 0;
        
        if(signs[i] == true)
        {
            nAnswer = absolutes[i];
        }
        
        else
        {
            nAnswer = absolutes[i] * -1;
        }
        
        answer += nAnswer;
    }
    return answer;
}