// Matthew Miranda
// CSCI 1010 - 002
// Lab 8 Program 3
// This is a program that will take a group of numbers and tell the user the largest and smallest numbers in the group

#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int main ()

{
    int n1, n2, n3, n4;

    cout << "Please enter four integers: ";
    cin >> n1 >> n2 >> n3 >> n4;

    if (n1 > n2 && n1 > n3 && n1 >> n4)
    {
        cout << "The largest is: " << n1 <<endl;
    }
    else if (n2 > n1 && n2 > n3 && n2 > n4)
    {
        cout << "The largest is: " << n2 <<endl;
    }
    else if (n3 > n1 && n3 > n2 && n3 > n4)
    {
        cout << "The largest is: " << n3 <<endl;
    }
    else if (n4 > n1 && n4 > n2 && n4 > n3)
    {
        cout << "The largest is: " << n4 <<endl;
    }

    if (n1 < n2 && n1 < n3 && n1 < n4)
    {
        cout << "The smallest is: " << n1 <<endl;
    }
    else if (n2 < n1 && n2 < n3 && n2 < n4)
    {
        cout << "The smallest is: " << n2 <<endl;
    }
    else if (n3 < n1 && n3 < n2 && n3 < n4)
    {
        cout << "The smallest is: " << n3 <<endl;
    }
    else if (n4 < n1 && n4 < n2 && n4 < n3)
    {
        cout << "The smallest is: " << n4 <<endl;
    }

    return 0;
}