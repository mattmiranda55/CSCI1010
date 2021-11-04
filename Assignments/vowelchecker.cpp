// Matthew Miranda
// CSCI 1010 - 002
// Assignment 4 Program 1
// This is a program that allows a user to input a letter and it will tell the user if the letter is a vowel or not

#include<iostream>
#include<string>

using namespace std;

int main()

{
    char letter;

    cout << "Please enter a lower case character: ";
    cin >> letter;

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    {
        cout << letter << " is a vowel" << endl;
    }
    else if (letter != 'a' || letter != 'e' || letter != 'i' || letter != 'o' || letter != 'u')
    {
        cout << letter << " is not a vowel" << endl;
    }

    return 0;
}