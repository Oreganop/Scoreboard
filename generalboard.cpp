#include"generalboard.h"

generalboard::generalboard(int c, int p)
    : competitors(c), periods(p)
{
    grid = new int*[c];
    for (int i=0; i<c; i++)
    {
        grid[i] = new int[p];
        for (int j=0; j<p; j++)
        {
            grid[i][j] = 0;
        }
    }
}

generalboard::~generalboard()
{
    for (int i=0; i<competitors; i++)
    {
        delete [] grid[i];
    }
    delete [] grid;
}

void generalboard::setScore(int competitor, int period, int score)
{
    if ( competitor <= competitors && period <= periods && competitor >= 1 && period >= 1)
    {
        grid[competitor-1][period-1] = score;
    }
}

int generalboard::getScore(int competitor, int period)
{
    if ( competitor <= competitors && period <= periods && competitor >= 1 && period >= 1)
    {
        return grid[competitor-1][period-1];
    }
    return 0;
}

int generalboard::getTotalScore(int competitor)
{
    int total=0;
    if ( competitor <= competitors && competitor>= 1 )
    {
        for (int p=0; p<periods; p++)
        {
            total += grid[competitor-1][p];
        }
        return total;
    }
    return 0;
}

void generalboard::clearScoreboard()
{

    for (int i=0; i<competitors; i++)
    {
        for (int j=0; j<periods; j++)
        {
            grid[i][j] = 0;
        }
    }
}
