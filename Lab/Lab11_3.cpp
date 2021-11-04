// Matthew Miranda
// CSCI 1010 - 002
// Lab 11 Program 3
// This is a program that will let you input a binary number and it will output the decimal number

#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main()

{
    int binary, decimal = 0, i = 0;

    cout << "Please enter a binary number: ";
    cin >> binary;

    // to get first digit do binary % 10, then update binary with binary = binary / 10
    // use 2^i (i being an index that has 1 added to it) to convert to decimal
    // use do while loop

    do
    {
        decimal = decimal + ((binary % 10) * pow(2,i));
        binary = binary / 10;
        i++;
        // cout << "decimal in do while: " << decimal << "\t i in do while: " << i << "\t binary in do while: " << binary <<endl;
    }
    while(binary != 0);

    cout << "The decimal number is: " << decimal <<endl;

    return 0;
}