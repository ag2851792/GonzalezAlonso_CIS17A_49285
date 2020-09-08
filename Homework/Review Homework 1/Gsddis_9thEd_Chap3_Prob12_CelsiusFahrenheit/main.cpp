
/* 
 * File:   main.cpp
 * Author: Alonso Gonzalez
 * Created on September 4, 2020, 5:41 PM
 * Purpose: Convert Celsius to Fahrenheit
 */

//System Libraries 
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    float outputFah; // Celsius converted to Fahrenheit
    float inputCels; // user inputed Celsius 
    
    //Initialize variables, input degree Celsius
    cout << "Enter Celsius" << endl; 
    cin >> inputCels;
    outputFah = (inputCels * 9.0) / 5.0 +32;
    
    //Display outputs 
    cout << "The current temperature in Celsius is " << inputCels << endl;
    cout << "The current temperature in Fahrenheit is " << outputFah << endl;
    
    return 0;
}

