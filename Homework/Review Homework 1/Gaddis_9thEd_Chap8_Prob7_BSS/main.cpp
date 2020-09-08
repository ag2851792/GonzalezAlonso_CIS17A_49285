/* 
 * File:   main.cpp
 * Author: Alonso Gonzalez 
 * Created on September 7, 2020, 4:55 PM
 * Purpose: This program will search for the name rather than 
 *          an array of ints. 
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//Function Prototype
void selectionSort(string array[], int size);
void swap(string &a, string &b);
void displayArray (string array[], int size);
int binarySearch(string array[], int size, string value);

int main(int argc, char** argv) {
    const int NUM_NAMES = 20; //number of names
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                               "Griffin, Jim", "Stamey, Marty", "Rose, Geri", 
                               "Taylor, Terri", "Johnson, Jill", 
                               "Allison, Jeff", "Looney, Joe", "Wolfe, Bill", 
                               "James, Jean", "Weaver, Jim", "Pore, Bob", 
                               "Rutherford, Greg", "Javens, Renee", 
                               "Harrison, Rose", "Setzer, Cathy",
                               "Pike, Gordon", "Holland, Beth" };
    string userName;// name input from user
    int position;//store the position of the name found
    
    //Call function
    displayArray(names, NUM_NAMES);
    selectionSort(names,NUM_NAMES);
    displayArray(names, NUM_NAMES);
    
    //Grab name from user
    cout << "Enter name: ";
    getline(cin, userName);
    
    //Call binary and decide if name was found 
    position = binarySearch(names, NUM_NAMES, userName);
    if (position != -1)
        cout << names[position] << " was found." << endl;
    else
        cout << userName << " was not found." << endl;
    return 0;
}

/******************************************************
 * The selection sort function order the name from    *
 * ascending order                                    *
 ******************************************************/
void selectionSort(string array[], int size)
{
    int minIndex;
    string minValue;
    
    for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        minValue = array[start];
        for (int index = start + 1; index < size; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }    
        }
        swap(array[minIndex], array[start]);
    }
}

/******************************************************
 * The swap function swaps a and b in memory          *
 ******************************************************/
void swap(string &a, string &b)
{
    string temp = a;
    a = b;
    b = temp;
}

/******************************************************
 * The displayArray function output names             *
 ******************************************************/
void displayArray (string array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << endl;
    cout << endl;
}

/*******************************************************
 * The binarySearch function will search for the name  *
 * by starting in the middle in each interval          *                                                   *
 ******************************************************/
int binarySearch(string array[], int size, string value)
{
    int first = 0,
        last = size - 1,
        middle,
        position = -1;
    bool found = false;
    
    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        if(array[middle] == value)
        {
            position = middle;
            found = true;
        }
        else if (array[middle] > value)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return position;
}
