// Matthew Miranda
// CSCI 1010 - 002
// Lab 12 Program 4
// This is a prgram that will output the harmonic numbers

#include<iostream>
#include<array>

using namespace std;

int main()

{
    double a[20];
    int i;

    a[0] = 1.0;
    a[1] = 1.5;

    cout << a[0] << " ";

    for(i = 2; i < 20; i++)
    {
        a[i] = a[i - 1] + 1.0/(i+1);
        cout << a[i - 1] << " ";
    }

    return 0;
}