/* 
   File:   main
   Author: Camerin Delfin
   Created on September 22, 2016, 10:11 PM
   Purpose:  To display the subtotal, sales tax, and total of a sale
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
    float item1 = 15.95;
    float item2 = 24.95;
    float item3 = 6.95;
    float item4 = 12.95;
    float item5 = 3.95;
    
    //Process values -> Map inputs to Outputs
    float subtotal = item1+item2+item3+item4+item5;
    float taxes    =    (item1+item2+item3+item4+item5)*.07;
    float total    = subtotal+taxes;
    
    //Display Output
    cout<<" Price of item 1           = $"<<item1<<endl;
    cout<<" Price of item 2           = $"<<item2<<endl;
    cout<<" Price of item 3           = $"<<item3<<endl;
    cout<<" Price of item 4           = $"<<item4<<endl;
    cout<<" Price of item             = $"<<item5<<endl;
    cout<<" The sale before taxes is"<<"  = $"<<subtotal<<endl;
    cout<<" The tax amount is"<<"         = $"<<taxes<<endl;
    cout<<" The Total amount is"<<"       = $"<<total<<endl;
    
    //Exit Program
    return 0;
}