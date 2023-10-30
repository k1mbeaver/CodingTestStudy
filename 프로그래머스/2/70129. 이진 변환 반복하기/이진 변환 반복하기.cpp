#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<char> vecS;
    int nTurn = 0;
    int nRemove = 0;
    
    for(int i = 0; i < s.size(); i++)
    {
        vecS.push_back(s[i]);
    }
    
    while(vecS.size() != 1)
    {
        vector<char> swapVec;
        stack<int> TurnBit;
        
        int TurnLength = 0;
        
        // 현재 안에 있는 값에서 0을 제거
        for(int i = 0; i < vecS.size(); i++)
        {
            if(vecS[i] == '0')
            {
                nRemove++;
            }
            
            else if(vecS[i] == '1')
            {
                TurnLength++;
            }
        }
        
        while(TurnLength != 0)
        {
            if (TurnLength % 2 == 1) // 나머지가 1
                TurnBit.push(1);
            else			// 나머지가 0
                TurnBit.push(0);

            TurnLength /= 2; 		// X가 0이 될 때까지 2로 계속해서 나눈다.
        }
        
        while(!(TurnBit.empty()))
        {
            swapVec.push_back(TurnBit.top() + '0');
            TurnBit.pop();
        }
        
        vecS.swap(swapVec);
        nTurn++;
    }
    
    answer.push_back(nTurn);
    answer.push_back(nRemove);
    
    return answer;
}