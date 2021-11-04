// Matthew Miranda
// CSCI 1010 - 002
// Assignment 4 Program 4
// This is a program that will calculate if any given year is a common year or a leap year

#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int main()

{
    int year;

    cout << "Please enter a year: ";
    cin >> year;

    if ((year % 4) >= 1)
    {
        cout << "It's a common year" <<endl;
    }
    else if ((year % 100) >= 1)
    {
        cout << "It's a leap year" <<endl;
    }
    else if ((year % 400) >= 1)
    {
        cout << "It's a common year" <<endl;
    }
    else
    {
        cout << "It's a leap year" <<endl;
    }

    return 0;
}