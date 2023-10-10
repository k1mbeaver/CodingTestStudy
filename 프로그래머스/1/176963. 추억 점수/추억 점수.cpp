#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    
    vector<int> answer;
    int SequenceSum = 0;
    
    for(int i = 0; i < photo.size(); i++)
    {
        SequenceSum = 0;
        
        for(int j = 0; j < photo[i].size(); j++)
        {
            for(int n = 0; n < name.size(); n++)
            {
                if(name[n] == photo[i][j])
                {
                    SequenceSum += yearning[n];
                }
            }
        } 
        
        answer.push_back(SequenceSum);
        
    }
    return answer;
}