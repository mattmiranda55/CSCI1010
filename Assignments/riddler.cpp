// Matthew Miranda
// CSCI 1010 - 002
// Assignment 6 Program 3
// This is a program that will output the addresses on Pennsylvania Avenue that solve The Riddlers riddle

#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main()

{
    int i = 1000, thousands, tens, hundreds, ones, sum;

    while (i < 9999)
    {
        i = i + 1;
        thousands = i / 1000;
        hundreds = (i % 1000) / 100;
        tens = (i % 100) / 10;
        ones = i % 10;
        sum = thousands + hundreds + tens + ones;
        bool a = false, b = false, c = false;

        if(thousands == tens * 3)
        {
            a = true;
        }
        
        if(sum == 27)
        {
            b = true;
        }

        if(i % 2 != 0)
        {
            c = true;
        }

        if(a == true && b == true && c == true)
        {
            cout << i <<endl;
        }
    }

    return 0;
}