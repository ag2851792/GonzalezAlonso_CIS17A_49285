/* 
 * File:   main.cpp
 * Author: Alonso Gonzalez
 * Created on September 7, 2020, 3:49 PM
 * Purpose: To output Fahrenheit and Celsius to a table after 
 *          converting it from Fahrenheit
 */

//System Libraries 
#include <iostream>
using namespace std;

//Function prototype 
float celToFah(float f); //Celsius to Fahrenheit

int main(int argc, char** argv) {
    //Declare variables and constant 
    const int MIN_TEMP = 0; //Start at 0
    const int MAX_TEMP = 20;//End at 20
    float celsius;//Store converted Fahrenheit
    
    //Display top part of table 
    cout << "------------------------------------|\n";
    cout << "Fahrenheit     | Celsius\n";
    cout << "------------------------------------|\n";
    
    //Output Fahrenheit and Celsius to a table
    for (int i = MIN_TEMP; i <= MAX_TEMP; i++)
    {
        celsius = celToFah(i);
        
        cout << i << "                ";
        cout << celsius << endl;
    }    
    return 0;
}

/**************************************************
 *Convert Celsius to Fahrenheit                   *
 *************************************************/
float celToFah(float f)
{
    //Formula to convert Fahrenheit to Celsius
    return (5.0/9.0) * (f - 32.0);
}

