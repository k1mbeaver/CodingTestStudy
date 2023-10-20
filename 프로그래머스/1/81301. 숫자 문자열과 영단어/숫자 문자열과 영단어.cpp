#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> strNumber = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for(int i = 0; i < 10; i++)
    {   
        while(s.find(strNumber[i]) != string::npos)
        {
            int nIndex = 0;
            nIndex = s.find(strNumber[i]);
            string nNumber = to_string(i);
            s.replace(nIndex, strNumber[i].size(), nNumber);
        }
    }
    
    answer = stoi(s);
    return answer;
}