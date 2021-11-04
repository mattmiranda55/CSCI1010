// Matthew Miranda
// CSCI 1010 - 002
// Assignment 4 Program 3
// This is a program that will calculate the amount of income tax due for different incomes

#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int main()

{
    double income , tax;
    
    cout << "Please enter taxable income: ";
    cin >> income;

    if (income < 750)
    {
        tax = income * .01;
        cout << "The tax due is: " << tax <<endl;
    }
    else if (income >= 750 && income < 2250)
    {
        tax = 7.5 + ((income - 750) * .02);
        cout << "The tax due is: " << tax <<endl;
    }
    else if (income >= 2250 && income < 3750)
    {
        tax = 37.5 + ((income - 2250) * .03);
        cout << "The tax due is: " << tax <<endl;
    }
    else if (income >= 3750 && income < 5250)
    {
        tax = 82.5 + ((income - 3750) * .04);
        cout << "The tax due is: " << tax <<endl;
    }
    else if (income >= 5250)
    {
        tax = 142.5 + ((income - 5250)* .05);
        cout << "The tax due is: " << tax <<endl;
    }
    
    return 0;
}