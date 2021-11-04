// Matthew Miranda
// CSCI 1010 - 002
// Assignment 5 Program 2
// This is a program that will display the hailstone sequence for any given number

#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int main()

{
    int n;

    cout << "Please enter a number: ";
    cin >> n;

    while (1)
    {
        if (n == 1)
        {
            cout <<endl;
            break;
        }
        else if (n % 2 != 0)
        {
            n = (3 * n) + 1;
            cout << n <<", ";
        }
        else if (n % 2 == 0)
        {
            n = n / 2;
            cout << n <<", ";
        }
    }
    return 0;
}