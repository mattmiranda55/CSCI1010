// Matthew Miranda
// CSCI 1010 - 002
// Assignment 4 Program 5
// This is a program that allows you to input a letter grade and it will output information about the grade

#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main ()

{
    char grade;

    cout << "Please enter a letter grade: ";
    cin >> grade;

    switch(grade)
    {
        case 'A' :
            cout << "Excellent" <<endl;
            break;
        case 'B' :
            cout << "Good" <<endl;
            break;
        case 'C' :
            cout << "Average" <<endl;
            break;
        case 'D' :
            cout << "Poor" <<endl;
            break;
        case 'F' :
            cout << "Failing" <<endl;
            break; 
    }

    return 0;
}