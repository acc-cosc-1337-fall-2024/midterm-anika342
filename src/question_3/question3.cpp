#include "question3.h"

bool test_config()
{
    return true;
}

int get_earned_points(int sold)
{
    int points;
    if (sold >= 1 && sold <= 5)
    {
        points = sold*1;
    }
    else if (sold >= 6 && sold <= 10)
    {
        points = sold*5;
    }
    else if (sold >= 11 && sold <= 15)
    {
        points = sold*10;
    }
    else if (sold >= 16)
    {
        points = sold*15;
    }
    return points;
}