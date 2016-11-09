#include<iostream>
#include"generalboard.h"

using namespace std;

int main()
{
    generalboard b(5,5);
    for (int i=-1; i<=8; i++)
    {
        for (int j=-1; j<=8; j++)
        {
            b.setScore(i,j,i+j-1);
            cout << b.getScore(i, j) << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Total score for team 2: " << b.getTotalScore(2) << endl;
    b.clearScoreboard();
    for (int i=-1; i<=8; i++)
    {
        for (int j=-1; j<=8; j++)
        {
            cout << b.getScore(i, j) << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Total score for team 2: " << b.getTotalScore(2) << endl;
    return 0;
}
