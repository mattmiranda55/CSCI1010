// Matthew Miranda
// CSCI 1010 - 002
// Lab 8 Program 2
// This is a program that will take a 2 digit number greater than or equal to 20 and print the English word for the number

#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int main()

{
    int num, ones, tens;
    char onesEng, tensEng;

    cout << "Please enter a number >= 20: ";
    cin >> num;

    tens = num / 10;
    ones = num % 10;

    switch (tens)
    {
        case 2:
            cout << "Twenty-";
            break;
        case 3:
            cout << "Thirty-";
            break;
        case 4:
            cout << "Fourty-";
            break;
        case 5:
            cout << "Fifty-";
            break;
        case 6:
            cout << "Sixty-";
            break;
        case 7:
            cout << "Seventy-";
            break;
        case 8:
            cout << "Eighty-";
            break;
        case 9:
            cout << "Ninty-";
            break;
    }

    switch (ones)
    {
        case 0:
            cout <<endl;
            break;
        case 1:
            cout << "one" <<endl;
            break;
        case 2:
            cout << "two" <<endl;
            break;
        case 3:
            cout << "three" <<endl;
            break;
        case 4:
            cout << "four" <<endl;
            break;
        case 5:
            cout << "five" <<endl;
            break;
        case 6:
            cout << "six" <<endl;
            break;
        case 7:
            cout << "seven" <<endl;
            break;
        case 8:
            cout << "eight" <<endl;
            break;
        case 9:
            cout << "nine" <<endl;
            break;
    }
    
    return 0;
}