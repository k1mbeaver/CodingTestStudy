#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int i, int j)
{
    return j < i;
}

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    // 내림차순과 올림차순
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), compare);
    
    for(int i = 0; i < A.size(); i++)
    {
        answer += A[i] * B[i];
    }

    return answer;
}