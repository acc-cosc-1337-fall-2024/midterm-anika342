//#include "question3.h"
#include "question3.cpp"
#include <iostream>
#include <string>

using std::string;

int main() 
{
    int sold;
    int points;
	int menuSelection;
    std::string confirmation = "n";

    do{
        std::cout << "	  " << std::endl;
        std::cout << "Please select from the following options:  (enter a number)" <<std::endl;
        std::cout << "  1-Canculate points from widgets sold" << std::endl;
        std::cout << "  2-Exit" << std::endl;
        std::cin >> menuSelection;
        if (menuSelection==1)
        {
            std::cout << "Please enter number of widgets sold (between 0 and 10,000):" << std::endl;
            std::cin >> sold;

            if (sold>=0 && sold<=10000 && menuSelection==1)
            {
                points = get_earned_points(sold);
                std::cout << "Points Earned " << points << std::endl;
            }
            else
            {
                std::cout << "The number is out of range!" << std::endl;
                //points = -1;
            }
        }
        
        else if (menuSelection==2)
		{
			std::cout << "Are you sure you want to exit? (enter y or n)" << std::endl;
			std::cin >> confirmation;
			if (confirmation=="y")
			{
				break;
			}
			else
			{
				menuSelection == 1;
			}
		}

    } while (menuSelection == 1 || confirmation == "n") ;
	

	return 0;
}
