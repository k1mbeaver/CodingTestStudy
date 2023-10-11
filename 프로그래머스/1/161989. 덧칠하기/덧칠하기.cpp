#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    
    int answer = 0;
    int brushstart = 0;
    
    for(int i = 0; i < section.size(); i++)
    {
        if(i == 0)
        {
            brushstart = section[i];
            brushstart += m - 1;
            answer++;
        }
        
        if(section[i] > brushstart)
        {
            brushstart = section[i];
            brushstart += m - 1;
            answer++;
        }
    }
    return answer;
}