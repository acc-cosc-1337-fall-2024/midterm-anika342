//2#include "question1.h"
#include "question1.cpp"
#include <iostream>
#include <string>

int main() 
{
	int menuSelection;
	int num1;
	int num2;
	int result;
	std::string confirmation = "n";

	do {
		std::cout << "" << std::endl;
        std::cout << "Please select from the following options:  (enter a number)" <<std::endl;
		std::cout << " 1-Greatest Common Divisor" <<std::endl;
		std::cout << " 2-Exit" << std::endl;
		std::cin >> menuSelection;


        if (menuSelection==1)
		{
			std::cout << "Please enter two positive numbers to find out their GCD:" << std::endl;
			std::cin >> num1;
			std::cin >> num2;
            if ( num1>=1 && num1<=200 && num2>=1 && num2<=200  )
            {
			    result=find_gcd(num1,num2);
			    std::cout << "GCD for your numbers is " << result << std::endl;
            }
            else
            {
                std::cout << "Invalid inputs! Please enter numbers in the range of 1 and 200 ! " << std::endl;
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
