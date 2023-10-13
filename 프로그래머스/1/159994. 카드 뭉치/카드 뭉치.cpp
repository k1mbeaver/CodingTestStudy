#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    
    bool bTest = false;
    
    int nCurrentOne = 0;
    int nCurrentTwo = 0;

    for(int i = 0; i < goal.size(); i++)
    {
        if(goal[i] == cards1[nCurrentOne])
        {
            bTest = true;
            nCurrentOne++;
            continue;
        }

        else if(goal[i] == cards2[nCurrentTwo])
        {
            nCurrentTwo++;
            bTest = true;
            
            continue;
        }

        else
        {
            bTest = false;
            answer = "No";
            return answer;
        }
    }
    if(bTest)
    {
        answer = "Yes";
    }
    return answer;
}