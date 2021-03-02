/************************************************************************
* Name: Exercise 5.12 (Calculating the Product of Odd Integers)
* File: oddIntegers.cpp
* Author: Milo Osterman
* Date: 2/23/2021
 *************************************************************************/

#include <iostream>
using namespace std;
//Populate 15 element array with integers 1 through 15
int values[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

int main(int argc, const char * argv[]) {
    int oddSum = 0; //Declare oddSum variable to collect value from for loop
    for (int i = 0; i < 15; i++){
        if ((values[i] % 2) != 0){
            oddSum = values[i] + oddSum; // oddSum += the current value in the for loop
        }
    }
    //Display result
    cout << "The sum of the odd numbers between 1 and 15 is: " << oddSum << endl;
}
