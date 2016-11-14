#include"Scoreboard.h"
#include<climits>

Scoreboard::Scoreboard(int c, int p)
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

Scoreboard::~Scoreboard()
{
    for (int i=0; i<competitors; i++)
    {
        delete [] grid[i];
    }
    delete [] grid;
}

void Scoreboard::setScore(int competitor, int period, int score)
{
    if ( competitor <= competitors && period <= periods && competitor >= 1 && period >= 1)
    {
        grid[competitor-1][period-1] = score;
    }
}

int Scoreboard::getScore(int competitor, int period)
{
    if ( competitor <= competitors && period <= periods && competitor >= 1 && period >= 1)
    {
        return grid[competitor-1][period-1];
    }
    return INT_MIN;
}

int Scoreboard::getTotalScore(int competitor)
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

void Scoreboard::clearScoreboard()
{

    for (int i=0; i<competitors; i++)
    {
        for (int j=0; j<periods; j++)
        {
            grid[i][j] = 0;
        }
    }
}
