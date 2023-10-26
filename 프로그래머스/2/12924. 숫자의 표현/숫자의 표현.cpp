#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int splitN = 0;
    
    // n을 반으로 나눠서 그 이하의 숫자들만 계산한다.
    if(n % 2 == 1) 
    {
        splitN = n / 2 + 1;
    }
    
    else if(n % 2 == 0) 
    {
        splitN = n / 2;
    }
    
    while(splitN != 0)
    {
        int sumResult = 0;
        
        for(int i = splitN; i > 0; i--)
        {
            sumResult += i;

            if(sumResult == n)
            {
                answer++;
                break;
            }
            
            else if(sumResult > n)
            {
                break;
            }
        }
        
        splitN--;
    }
    
    if(n != 1)
    {
        answer++;
    }
    
    return answer;
}