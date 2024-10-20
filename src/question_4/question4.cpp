#include "question4.h"
#include <string>

using std::string;

bool test_config()
{
    return true;
}


std::string gpa_to_letter_grade(double gpa)
{
    std::string letterGrade;

    if (gpa >= 3.5 && gpa <= 4.0)
    {
        letterGrade = "A";
    } 
    else if (gpa >= 3.0 && gpa <= 3.49) 
    {
        letterGrade = "B";
    }   
    else if (gpa >= 2.0 && gpa <= 2.99) 
    {
        letterGrade = "C";
    } 
    else if (gpa >= 1.0 && gpa <= 1.99) 
    {
        letterGrade = "D";
    } 
    else if (gpa >= 0.0 && gpa <= 0.99) 
    {
        letterGrade = "F";
    }
    return letterGrade;

}
