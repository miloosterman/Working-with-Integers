/************************************************************************
* Name: Exercise 5.17 (Calculating Sales)
* File: calculatingSales.cpp
* Author: Milo Osterman
* Date: 2/23/2021
 *************************************************************************/

#include <iostream>
using namespace std;

//Declare constants for program
static double PRODUCT_ONE_COST{2.98};
static double PRODUCT_TWO_COST{4.50};
static double PRODUCT_THREE_COST{9.98};
static double PRODUCT_FOUR_COST{4.49};
static double PRODUCT_FIVE_COST{6.87};
static int SENTINEL_VAL{-1};

//Prototypes
void displayProducts();
double getTotalValue();
void displayResults(double);

//Main
int main(int argc, const char * argv[]) {
    double totalValue{0}; //variable to hold total value
    
    displayProducts(); //Display products offered
    totalValue = getTotalValue(); //Calculate total value
    displayResults(totalValue); //Display final results
}

//Display
void displayProducts(){
    cout << "The retailer sells five products." << endl << "Product 1: $" << PRODUCT_ONE_COST << endl
    << "Product 2: $" << PRODUCT_TWO_COST << endl << "Product 3: $" << PRODUCT_THREE_COST << endl << "Product 4: $" << PRODUCT_FOUR_COST << endl << "Product 5: $" << PRODUCT_FIVE_COST << endl;
}

//Get total value using product number, price, and quantity sold.
double getTotalValue(){
    int productNum{0};
    double price{0};
    double quantitySold{0};
    double totalValue{0};

    
    while (true){
        cout << "Enter the product number that was sold. Enter -1 to exit." << endl;
        cin >> productNum;
        //Validate integer input and between 1 and 5
        while (!cin.good() || (productNum > 5 || productNum < 1)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Choose a product number between 1 and 5." << endl;
            cin >> productNum;
        }
        if (productNum == SENTINEL_VAL){ //End while if sentinel value entered
            break;
        }
        //switch case statement to set price based on product number chosen
        switch (productNum) {
            case 1:
                price = PRODUCT_ONE_COST;
                break;
            case 2:
                price = PRODUCT_TWO_COST;
                break;
            case 3:
                price = PRODUCT_THREE_COST;
                break;
            case 4:
                price = PRODUCT_FOUR_COST;
                break;
            case 5:
                price = PRODUCT_FIVE_COST;
                break;
                
            default:
                break;
        }
        //Get number of products sold
        cout << "Enter the number of products that were sold." << endl;
        cin >> quantitySold;
        while (!cin.good()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Try again." << endl;
            cin >> quantitySold;
        }
        //Calculate total value by multiplying price by quantity and adding the previous total
        totalValue = (price * quantitySold) + totalValue;
    }
    return totalValue;
}

//Display results
void displayResults(double totalValue){
    cout << "The total retail value of all products sold is: $" << totalValue << endl;
}
