// Matthew Miranda
// CSCI 1010 - 002
// Assignment 5 Program 1
// This is a program that will take a string of numbers and add up the even numbers in the string

#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main()

{
    int n, sum;
    sum = 0;

    cout << "Please enter a string of numbers ending in 0: ";
    cin >> n;

    while (n != 0)
    {
        if (n % 2 == 0)
        {
            sum  = sum + n;
        }
        cin >> n;
    }   
 
    cout << "The sum of the even numbers is: " << sum <<endl;
}  