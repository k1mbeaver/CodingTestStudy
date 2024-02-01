#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nPokemon, nQ;
    unordered_map<string, int> dictionaryStr;
    unordered_map<int, string> dictionaryN;
    cin >> nPokemon >> nQ;

    for (int i = 1; i <= nPokemon; i++)
    {
        string pName;
        cin >> pName;

        dictionaryStr.insert(make_pair(pName, i));
        dictionaryN.insert(make_pair(i, pName));
    }

    for (int i = 0; i < nQ; i++)
    {
        string strResult;
        cin >> strResult;

        try 
        {
            int num = stoi(strResult);

            // 변환 성공
            cout << dictionaryN[num] << "\n";
        }
        catch (const std::invalid_argument& e) 
        {
            // 변환 실패: 입력이 올바른 숫자가 아님

            cout << dictionaryStr[strResult] << "\n";
        }
    }

    return 0;
}