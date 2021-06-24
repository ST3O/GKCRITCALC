#include <iostream>
using namespace std;

int main()
{
    int totalAcc;
    cout << "Total accuracy: ";
    cin >> totalAcc;

    int totalLuck;
    cout << "Total luck: ";
    cin >> totalLuck;

    int accScaleFromSkill;
    cout << "Acc Scale from skill:  ";
    cin >> accScaleFromSkill;

    int alSum = totalAcc + totalLuck;
    if (alSum == 0)
    {
        cout << "Error! Divide by 0 case." << endl;
    }
    else
    {
        int hitChance = (totalAcc * accScaleFromSkill) / alSum;
        cout << "Hit chance: " << hitChance << "%" << endl;
    }
}
