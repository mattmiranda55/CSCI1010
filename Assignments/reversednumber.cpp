#include<iostream>

using namespace std;

int main()

{
    int number , reversedNumber , remainder;

    cout << "Please enter any integer: ";
    cin >> number;

    remainder = number % 10;
    reversedNumber = number / 10;

    cout << "The reversed number is: " << remainder <<reversedNumber << endl;

    return 0;
}