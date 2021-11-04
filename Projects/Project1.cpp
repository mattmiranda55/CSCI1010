// Matthew Miranda and Skyler York
// CSCI 1010 - 002
// Project 1
// This is a program that is a self-checkout system for a fast-food restaurant

#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int main()

{
    int option, hbAmmount, cbAmmount, ctAmmount;
    double hb, cb, ct, total;

    hb = 3.50;
    cb = 4.50;
    ct = 4.75;

    while (1)
    {
        cout << "***** Welcome! ***** \n";
        cout << "Please select an option from the menu below: \n";
        cout << "1. Check-out \n";
        cout << "2. Exit \n";
        cin >> option;

        if (option == 2)
        {
            cout << "Thank you for dining with us! Come again soon! \n";
            break;
        }

        switch (option)
        {
            case 1:
                cout << "Please enter how many of each item you would like to purchase: \n";
                cout << "Hamburgers: ";
                cin >> hbAmmount;
                cout << "Cheeseburgers: ";
                cin >> cbAmmount;
                cout << "Chicken Tenders: ";
                cin >> ctAmmount;
                
                total = (hbAmmount * hb) + (cbAmmount * cb) + (ctAmmount * ct);
                
                cout << "Your total today is: " << total <<endl;
                cout << "Thank you for dining with us! Come again soon!" <<endl <<endl <<endl;
                break;
        }
    }

    return 0;
}