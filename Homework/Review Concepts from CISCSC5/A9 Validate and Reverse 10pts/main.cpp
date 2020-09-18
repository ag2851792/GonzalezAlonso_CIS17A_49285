/* 
 * File:   main.cpp
 * Author: Alonso Gonzalez
 * Created on September 13, 2020, 4:26 PM
 * Purpose:  Input something, output it reversed with some modifications
 * Note:Range should be 5 digits, 321 = 00321 reverse = 12300 before subtraction
 *      12300 - 999 = 11301 after subtraction
 *      12300 = 00321 = 321 after reversal and no subtraction
 */

//System Libraries Here
#include <iostream>//cin,cout,endl
#include <cstring> //strlen()
#include <cmath>
using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
bool  inRange(const char [],unsigned short &);//Output true,unsigned or false
bool  reverse(unsigned short,signed short &);//Output true,short or false
short subtrct(signed short,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=80;     //More than enough
    char  digits[SIZE];    //Character digits or not
    unsigned short unShort;//Unsigned short
    short snShort;         //Signed short
    
    //Input or initialize values Here
    cout<<"Reverse a number and subtract if possible."<<endl;
    cout<<"Input a number in the range of an unsigned short"<<endl;
    cin>>digits;
    
    //Test if it is in the Range of an unsigned short
    if(!inRange(digits,unShort)){
        cout<<"No Conversion Possible"<<endl;
        return 0;
    }
    
    //Reverse and see if it falls in the range of an signed short
    if(!reverse(unShort,snShort)){
        cout<<"No Conversion Possible"<<endl;
        return 0;
    }
    
    //Now subtract if the result is not negative else don't subtract
    snShort=subtrct(snShort,999);
    
    //Output the result
    cout<<snShort<<endl;
    
    //Exit
    return 0;
}

bool  inRange(const char digits [],unsigned short &un)
{
    int i;
    int sum =0;
    int size = strlen(digits);
//    int size = digits;
//    if(size>32627){
//        return false;
//    }
//    
    for(i=0;i<size;i++){
        if(!isdigit(digits[i]))
            return false;
    }
    for(i=0;i<size;i++){
        sum += (digits[i]-'0')*pow(10,size-i-1);
    }
    
    if(sum>0 &&sum<65535){
        un=sum;
        return true;
    }
    else
        return false;
}

bool  reverse(unsigned short un,signed short &sn)
{

    unsigned short n = un;
    unsigned short rem = 0;
    unsigned short revNum = 0;
    unsigned short size = 5;
//    int sum =0;
    
    while (n!=0)
    {
        rem = n%10;
        revNum = revNum *10+rem;
        n=n/10;
    }
   
    if (un < 10000){
        if (un <1000){
            if (un <100){
                if(un <10){
                    revNum *= 10;
                }
                 revNum*=10;
            }
            revNum*=10;
        }
        revNum*=10;
    }
    if(revNum>32767)
        return false;
    else
    {
        sn = revNum; 
        return true;
    }
        
    
}

short subtrct(signed short snShort,int x)
{
    if(snShort>x)
        return snShort - x;
    else
        return snShort;
}