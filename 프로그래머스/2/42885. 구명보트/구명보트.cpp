#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int nFirstIdx = 0;
    int nEndIdx = 0;
    
    // 먼저 people 배열을 정렬한다.
    sort(people.begin(), people.end());
    
    // 정렬한거를 처음에서 부터 제일 작은값과 큰값을 비교해서 해보자
    while(people.size() > nFirstIdx)
    {
        int EndValue = people[people.size() - 1];
        
        // 만약에 최소값과 최대값의 합이 리미트보다 작거나 같다면
        if(people[nFirstIdx] + EndValue <= limit)
        {
            // 마지막을 제거하고 answer 증가시킨다.
            people.pop_back();
            nFirstIdx++;
            answer++;
        }
        
        // 만약 최소괎과 최대값의 합이 리미트보다 크다면
        else
        {
            // 마지막만 제거하고 answer 증가시킨다.
            people.pop_back();
            answer++;
        }
    }
    
    return answer;
}