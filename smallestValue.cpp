/************************************************************************
* Name: Exercise 5.11 (Find the Smallest Value)
* File: smallestValue.cpp
* Author: Milo Osterman
* Date: 2/23/2021
 *************************************************************************/

#include <iostream>


using namespace std;

void introMessage();
int getInteger(string prompt);

int main(int argc, const char * argv[]) {
    introMessage();
    
    int numOfValues{getInteger("Please enter the number of values you would like to enter.")};
    int values [numOfValues];
    
    for (int i = 0; i < numOfValues; i++){
        cout << "Enter integer #" << (i+1) << endl;
        values[i] = getInteger("Enter a integer.");
    }
    
    int smallest{values[0]};
    for (int i = 0; i < numOfValues; i++){
        if (values[i] < smallest){
            smallest = values[i];
        }
    }
    int oddSum = 0;
    for (int i = 0; i < numOfValues; i++){
        if ((values[i] % 2) != 0){
            oddSum = values[i] + oddSum;
        }
    }
    
    cout << "The smallest number is:" << smallest << endl;
    cout << "The sum of 1-15 is: " << oddSum << endl;
    
    
    
}

void introMessage(){
    cout << "This program will ask for a number of an integers you would like to enter." << endl;
    cout << "You will then enter that amount of integers." << endl;
    cout << "The program will return back the smallest value from that group." << endl;
    
}

int getInteger(string prompt){
    int input = 0;
    
    cout << prompt << endl;
    cin >> input;
    while (!cin >> input){
        cout << "Invalid input. Please enter an integer.";
    }
    
    return input;
    
}
    



