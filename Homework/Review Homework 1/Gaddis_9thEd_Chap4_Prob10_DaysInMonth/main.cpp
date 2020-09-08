/* 
 * File:   main.cpp
 * Author: Alonso Gonzalez
 * Created on September 5, 2020, 8:00 PM
 * Purpose: Determine how many days are in the provided
 *          month and year
 */

//System Libraries 
#include <iostream>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    unsigned short int year, month;
    
    //Ask for month and year
    cout << "Enter a month (1-12): ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    
    //Check if you put a negative year
    if (year < 0)
    {
        //Decision Statement for Month
        switch(month)
        {
            //Months that have 31 days
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                cout << "There is a total of 31 days." << endl;
                break;
            //Months that have 30 days
            case 4:
            case 6:
            case 9:
            case 11:
                cout << "There is a total of 30 days." << endl;

            //Calculate leap year
            case 2:
                //Decision statement for leap year
                if (year % 100 == 0)
                {   //Determine leap year if divisible by 100 then by 400
                    if (year % 400 == 0)
                        cout << "There are 29 days" << endl;
                    else
                        cout << "There are 28 days" << endl;
                }
                else if (year % 100 != 0)
                {   //Determine leap year if not divisible by 100
                    //then being divisible by 4
                    if (year % 4 == 0)
                        cout << "There are 29 days" << endl;
                    else
                        cout << "There are 28 days" << endl;
                }
                break;
            default:
                //Check for valid month
                cout << "Invalid month, try again" << endl;       
        }
    }
    else
        cout << "You have enter an invalid year" << endl;
    return 0;
}