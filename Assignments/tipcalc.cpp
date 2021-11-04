#include<iostream>

using namespace std;

int main()

{
    double amount , tip, people , finalAmount;

    cout << "Please enter the amount before tip: ";
    cin >> amount;

    cout << "Please enter the tip in percentage: ";
    cin >> tip;

    cout << "Please enter the amount of people: ";
    cin >> people;

    finalAmount = (amount + (tip / 100)) / people;

    cout << "The total amount per person is: $" <<finalAmount <<endl;

    return 0;
}