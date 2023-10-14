#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
	int selectN = 0;

	sort(participant.begin(), participant.end());
	sort(completion.begin(), completion.end());

	for (int i = 0; i < completion.size(); i++)
	{
		if (participant[i] == completion[selectN])
		{
			participant[i].erase();
			selectN++;
		}
	}

	int nParticipant = participant.size();
	int ncompletion = completion.size();

	for (int i = 0; i < participant.size(); i++)
	{
		if (participant[i] != "")
		{
			answer = participant[i];
			break;
		}
	}

	return answer;
}