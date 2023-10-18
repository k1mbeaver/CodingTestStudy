#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    int nA = 0;
    int nB = 0;
    int nC = 0;
    
    for(int i = 0; i < number.size(); i++)
    {
        nA = number[i];
        for(int j = i + 1; j < number.size(); j++)
        {
            nB = number[j];
            for(int k = j + 1; k < number.size(); k++)
            {
                nC = number[k];
                
                if(nA + nB + nC == 0)
                {
                    answer++;
                }
            }
        }
    }
    return answer;
}