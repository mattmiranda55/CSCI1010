// Matthew Miranda
// CSCI 1010 - 002
// Assignment 5 Program 3
// This is a program that will calculate the value of pi

#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main()

{
    int n;
    double total, pi;
    char op; // swtiches operand from positive to negative and vise versa
    
    n = 1;
    op = 1;
    
    while (n <= 99)
    {
        if(op == 0)
        {
            total = total - (1.0 / n);
            n = n + 2;
            op = 1;
        }
        else if (op == 1)
        {
            total = total + (1.0 / n);
            n = n + 2;
            op = 0;
        }
    }
    
    pi = 4 * total;
    cout << "The value of pi is: " << pi <<endl;
}