#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int Angle1, Angle2, Angle3;

    cin >> Angle1 >> Angle2 >> Angle3;

    // 세 각의 합이 180일 떄
    if (Angle1 + Angle2 + Angle3 == 180)
    {
        // 세 각의 크기가 모두 60이면
        if (Angle1 == 60 && Angle2 == 60 && Angle3 == 60)
        {
            cout << "Equilateral" << endl;
        }

        // 두 각이 같은 경우
        else if (Angle1 == Angle2 || Angle1 == Angle3 || Angle2 == Angle3)
        {
            cout << "Isosceles" << endl;
        }

        // 같은 각이 없는 경우
        else
        {
            cout << "Scalene" << endl;
        }
    }

    else
    {
        cout << "Error" << endl;
    }

    return 0;
}
