// Matthew Miranda
// CSCI 1010 - 002 
// Lab 12 Program 3
// This is a program that will take an array of 10 numbers, output the mean, and output how many numbers are above and below the mean

#include <iostream>

using namespace std;

int main()
{
    int a[10];
    int above = 0, below = 0, sum = 0, mean;

    cout << "Enter 10 values: " ;

    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
   
    }

    mean = sum / 10;

    for (int i = 0; i < 10; i++)
    {
        if (a[i] > mean)
        {
            above++;
        }
        else if (a[i] < mean)
        {
            below++;
        }
        
    }

    cout << "The mean value is " << mean << endl;
    cout << "There are " << above << " numbers above the mean" <<endl;
    cout << "There are " << below << " numbers below the mean" <<endl;
}