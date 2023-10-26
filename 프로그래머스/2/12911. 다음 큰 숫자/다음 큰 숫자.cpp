#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    int nBinary = 0;
    int BiggerN = n + 1;
    
    // n의 2진수 갯수를 구한다
    while(n != 0)
    {
        if (n % 2 == 1) // 나머지가 1
        {
            nBinary++;
        }
  
        n /= 2; 		// X가 0이 될 때까지 2로 계속해서 나눈다.
    }

    
    while(1)
    {
        int BigBinary = 0;
        int TestN = BiggerN;
        
        while(TestN != 0)
        {
            if (TestN % 2 == 1) 
                BigBinary++;

            TestN /= 2; 		
        }
        
        if(BigBinary == nBinary)
        {
            answer = BiggerN;
            break;
        }
        
        BiggerN++;
    }
    
    return answer;
}