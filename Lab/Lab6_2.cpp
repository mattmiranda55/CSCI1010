#include<iostream>
#include<math.h>

using namespace std;

int main()

{
    int dollars, twenties, tens, fives, ones;

    cout << "Please enter the amount of dollars: ";
    cin >> dollars;

    twenties = dollars / 20;
    tens = (dollars % 20) / 10;
    fives = (dollars % 10) / 5;
    ones = (dollars % 5) / 1;

    cout << "Number of $20 bills: " << twenties <<endl;
    cout << "Number of $10 bills: " << tens <<endl;
    cout << "Number of $5 bills: " << fives <<endl;
    cout << "Number of $1 bills: "<< ones <<endl;

    return 0;
}