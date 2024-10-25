#include "question4.h"
//#include "question4.cpp"
#include <iostream>
#include <string>

using std::string;

int main() 
{
    double gpa;
	std::string letterGrade;
	int menuSelection;
    std::string confirmation = "n";

    do{
        std::cout << "	  " << std::endl;
        std::cout << "Please select from the following options:  (enter a number)" <<std::endl;
        std::cout << "  1-Canculate letter grade from GPA" << std::endl;
        std::cout << "  2-Exit" << std::endl;
        std::cin >> menuSelection;
        if (menuSelection==1)
        {
            std::cout << "Please enter a gpa between 0 and 4:" << std::endl;
            std::cin >> gpa;

            if (gpa>=0.0 && gpa<=4.0 && menuSelection==1)
            {
                letterGrade = gpa_to_letter_grade(gpa);
                std::cout << "The letter grade is " << letterGrade << std::endl;
            }
            else
            {
                std::cout << "The number is out of range!" << std::endl;
                letterGrade = "invalid";
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
				menuSelection = 1;
			}
		}

    } while (menuSelection == 1 || confirmation == "n") ;
	

	return 0;
}
