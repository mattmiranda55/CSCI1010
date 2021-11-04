// Matthew Miranda
// CSCI 1010 - 002
// Assignment 3 Program 2
// This is a program that will take 10 numbers and output how many numbers are greater than 60

#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main()

{
    int n, loop, sixty;

    loop = 0;
    sixty = 0;

    while (loop < 10)
    {
        cout << "Please enter an integer: ";
        cin >> n;
        if(n > 60)
        {
            sixty = sixty + 1;
        }
        loop = loop + 1;
    }

    cout << "There are " << sixty << " integers larger than 60" <<endl;

    return 0;
}