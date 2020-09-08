/* 
 * File:   main.cpp
 * Author: Alonso Gonzalez
 * Created on September 7, 2020, 2:31 PM
 * Purpose: Calculate the population size of an organism
 */

//System Libraries
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    //Declare variables
    float startNum; //starting number of organism
    float avgPopInc; //average daily population increase 
    int daysMult; //number of days to multiply 
    
    //Grab input of starting number of organism & error check
    cout << "Please enter the starting number of organism: ";
    while(!(cin >> startNum) || startNum < 2)
    {
        cout << "Invalid response, please try again." << endl;
        cout << "Please enter the starting number of organism: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    
    //Grab inputs of average daily population increase
    cout << "Please enter average daily population increase (%): ";
    while(!(cin >> avgPopInc) || avgPopInc < 0)
    {
        cout << "Invalid response, please try again." << endl;
        cout << "Please enter average daily population increase (%): ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    
    //Grab Input of numbers of days to multiply
    cout << "Please enter the number the population will multiply: ";
    while(!(cin >> daysMult) || daysMult < 1)
    {
        cout << "Invalid response, please try again." << endl;
        cout << "Please enter the number the population will multiply: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    
    //Output daily population size with previous inputs 
    for(int i = 0; i < daysMult; i++)
    {
        cout << "Population size for day " << (i + 1);
        cout << ": " << startNum << endl;
        
        startNum += (startNum * avgPopInc);
    }    
    return 0;
}

