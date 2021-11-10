// Matthew Miranda
// CSCI 1010 - 002
// Lab 12 Program 1
// This is a program that will allow the user to enter an array of 10 numbers and it will output the numbers in reverse order

#include<iostream>
#include<array>

using namespace std;

int main()

{
    int a[10], i;

    cout << "Please enter 10 numbers: ";

    for(i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    cout << "The reverse order of the numbers is: " << a[9] << " " << a[8] << " " << a[7] << " " << a[6] << " " << a[5] << " " << a[4] << " " << a[3] << " " << a[2] << " " << a[1] << " " << a[0] <<endl;

    return 0;
}