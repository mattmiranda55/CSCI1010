// Matthew Miranda
// CSCI 1010 - 002
// Lab 10 Program 1
// This a program that replicates a scientific calculator to calculate squares and square roots

#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int main()

{
    int opt;
    double n, square, squareRoot;

    while(1)
    {
        cout << "***** Scientific Calculator *****\n";
        cout << "1. Square\n";
        cout << "2. Square Root\n";
        cout << "3. Exit\n";
        cout << "Please enter an option:";
        cin >> opt;

        if (opt == 3)
        {
            cout << "Thank You! See you next time!" <<endl;
            break;
        }

        switch(opt)
        {
            case 1:
                cout << "Please enter a number: ";
                cin >> n;
                square = pow(n,2);
                cout << n << "^2 is: " << square <<endl;
                break;
            case 2:
                cout << "Please enter a number: ";
                cin >> n;
                squareRoot = sqrt(n);
                cout << "The Square Root of " << n << " is: " << squareRoot <<endl;
                break;
        }
    }
    
    return 0;
}

