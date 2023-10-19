#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    int preTop = 0;
    
    priority_queue<int, vector<int>, greater<int>> pqScoville(scoville.begin(), scoville.end());
    
    while(pqScoville.size() > 1 && pqScoville.top() < K)
    {
        int firstA;
        int SecondB;
        
        if(preTop != 0)
        {
            firstA = preTop;
            SecondB = pqScoville.top();
            pqScoville.pop();
        }
        
        else
        {
            firstA = pqScoville.top();
            pqScoville.pop();
            SecondB = pqScoville.top();
            pqScoville.pop();
        }
        
        pqScoville.push(firstA + (SecondB * 2));
        
        if(pqScoville.top() >= K)
        {
            preTop = pqScoville.top();
            pqScoville.pop();
            answer++;
            continue;
        }
        
        preTop = 0;
        answer++;
    }
    
    if(pqScoville.top() < K) return -1;
    
    return answer;
}