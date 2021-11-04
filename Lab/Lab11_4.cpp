// Matthew Miranda
// CSCI 1010 - 002
// Lab 11 Program 4
// This is a program that will output all of the even squares between 0 and an integer, n

#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int main()

{
    int i, n, a;

    cout << "Please enter a number: ";
    cin >> n;
    n = n / 10;

    for(i = 0; i < n; i++)
    {
        a = i * i;
        
        if(a % 2 == 0 && a != 0)
        {
            cout << a << "\t";
        }
    }
    
    cout <<endl;

    return 0;
}