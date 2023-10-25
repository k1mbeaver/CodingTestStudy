#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    int minNumber = 0;
    int maxNumber = 0;
    
    // 문자열을 스트림화
    stringstream ss(s);

    // 공백 분리 결과를 저장할 배열
    vector<int> words;

    string word;
    int NumberWord;
    
    // 스트림을 한 줄씩 읽어, 공백 단위로 분리한 뒤, 결과 배열에 저장
    while (getline(ss, word, ' '))
    {
        NumberWord = stoi(word);
        words.push_back(NumberWord);
    }
        
    minNumber = *min_element(words.begin(), words.end());
    maxNumber = *max_element(words.begin(), words.end());

    string strMax = to_string(maxNumber);
    string strMin = to_string(minNumber);
    
    answer = strMin + " " + strMax;
    
    return answer;
}