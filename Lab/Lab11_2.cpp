// Matthew Miranda
// CSCI 1010 - 002
// Lab 11 Program 2
// This is a program that will tell the user how many digits are in a number

#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main()

{
    int n, digits = 0;

    cout << "Enter an integer: ";
    cin >> n;

    do
    {
        n = n / 10;
        digits++; 
    }
    while (n != 0);

    cout << "The amount of digits in this number is: " << digits <<endl;

    return 0;
}