// Matthew Miranda
// CSCI 1010 - 002
// Lab 9 Program 3
// This is a program that will show you the smallest number out of a group of three numbers

#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int main()

{
    int n1, n2, n3;

    cout << "Please enter 3 integers: ";
    cin >> n1 >> n2 >> n3;

    if ((n1 < n2) && (n1 < n3))
    {
        cout << "The smallest number is: " << n1 <<endl;
    }
    else if ((n2 < n1) && (n2 < n3))
    {
        cout << "The smallest number is: " << n2 <<endl;
    }
    else if ((n3 < n1) && (n3 < n2))
    {
        cout << "The smallest number is: " << n3 <<endl;
    }

    return 0;
}