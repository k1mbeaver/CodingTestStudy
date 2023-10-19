#include <string>
#include <vector>

using namespace std;

int factor(int a);

int solution(int number, int limit, int power) {
    int answer = 1;
    
    for(int i = 2; i <= number; i++)
    {
        int fighterPower = 0;
        
        fighterPower = factor(i);
        
        // 여기서 공격력이 제한보다 높으면
        if(fighterPower > limit)
        {
            fighterPower = power;
        }
        
        answer += fighterPower;
    }
    
    return answer;
}

int factor(int a) {
    int returnFactor = 0;
    
	if (a <= 0) {
		return 0;
	}

	for (int i = 1; i * i <= a; i++) {

		if (i * i == a) {
            returnFactor += 1;
            continue;
		}else if (a % i == 0) {
			returnFactor += 2;
            continue;
		}
	}
    
    return returnFactor;
}