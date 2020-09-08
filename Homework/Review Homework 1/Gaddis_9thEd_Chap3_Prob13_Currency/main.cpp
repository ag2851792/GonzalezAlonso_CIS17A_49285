/* 
 * File:   main.cpp
 * Author: Alonso Gonzalez 
 * Created on September 4, 2020, 6:48 PM
 * Purpose: Convert USD to Euro and Yen
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
const float YEN_PER_DOLLAR = 98.93; //1 USD = 98.93 Yen
const float EUROS_PER_DOLLAR = 0.74;//1 USD = 0.74 Euro
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types
    float usdEuro;//USD converted to euro
    float usdYen;//USD converted to yen
    float usd;//How much dollars to be converted 
    
    //Grab usd input 
    cout << "Please enter USD amount to be converted" << endl;
    cin >> usd;
    
    //Process conversion from dollars to currencies 
    usdEuro = EUROS_PER_DOLLAR * usd;
    usdYen = YEN_PER_DOLLAR * usd; 
    
    //Set decimal place 
    cout << setprecision(2) << fixed << showpoint;
    
    //Display output
    cout << usd << " US dollars is equivalent to " << usdEuro << " Euros and "
         << usdYen << " Yen." << endl;
    
    return 0;
}

