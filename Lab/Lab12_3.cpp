// Matthew Miranda
// CSCI 1010 - 002
// Lab 12 Program 3
// This is a program that will take an array of 10 numbers, output the mean, and output how many numbers are above and below the mean

#include<iostream>
#include<array>

using namespace std;

int main()

{
    int a[10], above = 0, below = 0, mean = 0, sum = 0;

    cout << "Enter 10 numbers: ";

    for(int i = 0; i < 10; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }

    // cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << " " << a[5] << " " << a[6] << " " << a[7] << " " << a[8] << " " << a[9];

    mean = sum / 10;

    for(i = 0; i < 10; i++);
    {
        cout << a[i] << " ";
        if(a[i] > mean)
        {
            above++;
        }
        else if (a[i] < mean)
        {
            below++;
        }
    }

    cout << "The mean is: " << mean << endl;
    cout << "There are " << above << " numbers above the mean" <<endl;
    cout << "There are " << below << " numbers below the mean" <<endl;

    return 0;
}