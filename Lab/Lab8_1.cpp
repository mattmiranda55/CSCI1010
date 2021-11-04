// Matthew Miranda
// CSCI 1010 - 002
// Lab 8 Program 1
// This is a program that will calculate the interest, total amount due, and the minimum payment for a revolving credit account

#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int main()

{
    double ammount, interest, total, minPayment;

    cout << "Please enter the account balance: $";
    cin >> ammount;

    interest = (1000 * .015) + ((ammount - 1000) * .01);
    cout << "The interest due is: $" << interest <<endl;

    total = ammount + interest;
    cout << "The total amount due is: $" << total <<endl;

    if (total <= 10)
    {
        minPayment = total;
        cout << "The minimum payment is: $" << minPayment <<endl;
    }
    else if (total > 10)
    {
        minPayment = total * .1;
        cout << "The minimum payment is: $" << minPayment <<endl;
    }

    return 0;
}