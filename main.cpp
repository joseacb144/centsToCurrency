// Section 8 Challenge
/*
    For this program I will be using US dollars and cents.
    
    Write a program that asks the user to enter the following:
    An integer representing the number of cents
    
    You may assume that the number of cents entered is greater than or equal to zero
    
    The program should then display how to provide that change to the user.
    
    In the US:
        1 Dollar is 100 cents
        1 Quarter is 25 cents
        1 Dime is 10 cents
        1 Nickel is 5 cents
        1 Penny is 1 cent
          
    Sample Run:
        Enter an amount in cents: 92
         
            You can provide this change as follows:
             Dollars : 0
             Quarters: 3
             Dimes: 1
             Nickels: 1
             Pennies: 2
*/

#include <iostream>
using namespace std;

int main(){
    
    // Create different cent constant variables
    const long dollar{100}, quarter{25},  dime{10},  nickel{5}, penny{1};
    
    // Ask user an amount in cents and assign it to 'cents'
    cout << "Enter an amount in cents: ";
    long cents;
    cin >> cents;
    
    // Inform the user how he/she can provide the change in the different style of cents
    cout << "You can provide this change as follows: " << endl;
    
    // Dollars
    long cents_to_dollar = cents/dollar;
    cout << "Dollars: " << cents_to_dollar << endl;

    // Quarters
    long amount_quarters = (cents%dollar)/quarter;
    cout << "Quarters: " << amount_quarters << endl;

    // Dimes
    long amount_dimes = (cents%dollar%quarter)/dime;
    cout << "Dimes: " << amount_dimes << endl;

    // Nickels
    long amount_nickels = (cents%dollar%quarter%dime)/nickel;
    cout << "Nickels: " << amount_nickels << endl;
    
    // Pennies
    long amount_pennies = (cents%dollar%quarter%dime%nickel)/penny;
    cout << "Pennies: " << amount_pennies << endl;
 
    cout << endl;
    return 0;
}