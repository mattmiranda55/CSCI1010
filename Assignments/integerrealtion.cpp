// Matthew Miranda
// CSCI 1010 - 002
// Assignment 4 Program 2
// This is a program that will show the relationship between two integers

#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int main()

{
    int num1 , num2;

    cout << "Please enter two integers: ";
    cin >> num1 >> num2;

    if (num1 > num2)
    {
        cout << num1 << " is greater than " << num2 <<endl;
    }
    else if (num1 < num2)
    {
        cout << num1 << " is less than " << num2 <<endl;
    }
    else if (num1 == num2)
    {
        cout << num1 << " is equal to " << num2 <<endl;
    }

    return 0;
}