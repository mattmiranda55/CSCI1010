// Matthew Miranda
// CSCI 1010 - 002
// Lab 10 Program 2
// This is a program that will calculate the GCD of two numbers

#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main()

{
    int m, n, r;

    cout << "Please enter two integers: ";
    cin >> m >> n;

    while ((m % n) > 0)
    {
        r = m % n;
        m = n;
        n = r;

    }

    cout << "The GCD is: " << n <<endl;

    return 0;

}