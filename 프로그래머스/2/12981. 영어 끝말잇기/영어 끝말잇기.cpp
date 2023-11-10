#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    vector<string> UseWords;
    int nCountPlayer = 1;
    int nCount = 1;
    bool bFind = false;
    char prevCh = ' ';
    
    for(int i = 0; i < words.size(); i++)
    {
        if(prevCh != ' ')
        {
            // 만약에 이전 단어의 맨 뒤 알파벳과 현재 단어의 맨 앞 알파벳이 다르면 탈출
            if(prevCh != words[i][0])
            {
                bFind = true;
                break;
            }
        }
        
        // 만약에 현재 입력한 단어가 이전에 입력한 단어면 탈출
        if(find(UseWords.begin(), UseWords.end(), words[i]) != UseWords.end())
        {
            bFind = true;
            break;
        }
        
        // 아무 일도 없으면 카운트를 증가시킨다.
        nCountPlayer++;
        
        // 아무 일도 없으면 사용한 단어에 넣는다.
        UseWords.push_back(words[i]);
        
        // 만약에 한바퀴 다돌았으면
        if(nCountPlayer > n)
        {
            // 카운트를 증가시키고 초기화
            nCount++;
            nCountPlayer = 1;
        }
        
        // 현재 단어의 맨 뒤 글자를 이전 prevCh에 적용
        int nCurrentSize = 0;
        nCurrentSize = words[i].size();
        prevCh = words[i][nCurrentSize - 1];
    }
    
    if(bFind)
    {
        answer.push_back(nCountPlayer);
        answer.push_back(nCount);
    }
    
    else
    {
        nCountPlayer = 0;
        nCount = 0;
        answer.push_back(nCountPlayer);
        answer.push_back(nCount);
    }
    
    return answer;
}