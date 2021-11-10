// Matthew Miranda
// CSCI 1010 - 002
// Lab 12 Program 2
// This is a program that will output the first 40 Fibonacci numbers

#include<iostream>
#include<array>

using namespace std;

int main()

{
    int a[40], i;

    a[0] = 1;
    a[1] = 1;

    for(i = 2; i < 40; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }

    for(i = 0; i < 40; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}