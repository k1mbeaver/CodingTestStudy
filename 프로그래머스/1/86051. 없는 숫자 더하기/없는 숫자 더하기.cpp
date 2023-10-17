#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 45;
    
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < numbers.size(); j++)
        {
            if(numbers[j] == i)
            {
                answer = answer - i;
                break;
            }
        }
    }
    return answer;
}