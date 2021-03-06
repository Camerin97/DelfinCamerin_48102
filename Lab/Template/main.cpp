/* 
   File:   main
   Author: Camerin Delfin
   Created on September 21, 2016, 10:40 PM
   Purpose: To demonstrate the sum of two numbers, 50 and 100
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    
    //Input values
    int num1 = 50;
    int num2 = 100;
    
    //Process values -> Map inputs to Outputs
    int total = num1 + num2;
    
    //Display Output
    cout<<"The sum of "<<num1<<" + "<<num2<<" = "<<total<<endl;
    
    //Exit Program
    return 0;
}