#include<iostream>
#include"generalboard.h"

using namespace std;

int main()
{
    generalboard b(5,5);
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            cout << i+j;
            b.setScore(i,j,i+j);
            cout << b.getScore(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}
