#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int psize = 0;
    unsigned long long panswer = 0;
    
    panswer = stoull(p);
    psize = p.size();
    
    for(int i = 0; i < t.size(); i++)
    {
        unsigned long long newNum = stoull(t.substr(i, psize));

        if(t.size() - i < psize)
        {
            break;
        }

        if(newNum <= panswer)
        {
            answer++;
        }
    }
    
    return answer;
}