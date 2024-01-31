#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int playerN, defaultN, num;
    vector<int> myNumber;

    cin >> playerN;
 
    for (int i = 0; i < playerN; i++) {
        int N;
        cin >> N;
        myNumber.push_back(N);
    }

    sort(myNumber.begin(), myNumber.end());

    cin >> defaultN;
    for (int i = 0; i < defaultN; i++) {
        cin >> num;

        if (binary_search(myNumber.begin(), myNumber.end(), num)) {
            cout << '1' << ' ';
        }
        else {
            cout << '0' << ' ';
        }
    }
}