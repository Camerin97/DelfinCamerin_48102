/* 
 * File:   main.cpp
 * Author: Camerin Delfin
 *
 * Created on October 5, 2016, 2:55 PM
 */

//System Libraries
#include <iostream> //Input/Output Objects
#include <string>

using namespace std;//Name-space used in system libraries
//User Libraries

//Global constants

//Function prototypes

//Execution Begins
int main()
{
    //Declaration of Variables
    string color1, color2;
    
    //Input values
    
    //Calculations
    
    //Display outputs
    cout << "Input color 1: ";
	getline(cin, color1);

    cout << "Input color 2: ";
	getline(cin, color2);

    if (color1 == "red" && color2 == "blue")
        {
		cout << "Those two colors make: Purple" << endl;
	}
            else if (color1 == "blue" && color2 == "yellow")
	{
		cout << "Those two colors make: Green" << endl;
	}
            else
	{
		cout << "Invalid Input....";
	}
	cin.get();
}

