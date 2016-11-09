#include"generalboard.h"

generalboard(int c, int p)
    : competitor(c), period(p)
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

void setScore(int competitor, int period, int score)
{
    competitor--;
    period--;
    if ( competitor < competitors && period < periods && competitor >= 0 && period >= 0)
    {
        grid[competitor][period] = score;
    }
}

int getScore(int competitor, int period)
{
    competitor--;
    period--;
    if ( competitor <= competitors && period <= periods && competitor >= 0 && period >= 0)
    {
        return grid[competitor][period];
    }
    return 0;
}

int getTotalScore(int competitor)
{
    int total=0;
    if ( competitor <= competitors && competitor>= 1 )
    {
        for (int p=0; p<periods; p++)
        {
            total += grid[competitor-1][p];
        }
    }
    return 0;
}

void clearScoreboard()
{
    for (int i=0; i<c; i++)
    {
        delete [] grid[i];
    }
    delete [] grid;

    grid = new int*[competitors];
    for (int i=0; i<competitors; i++)
    {
        grid[i] = new int[periods];
        for (int j=0; j<periods; j++)
        {
            grid[i][j] = 0;
        }
    }
    
}
