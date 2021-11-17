// Matthew Miranda
// CSCI 1010 - 002
// Lab 13 Program 3
// This is a program that will find the non repeated number in a given array

#include<iostream>

using namespace std;

int singleNum(int a[], int arraySize)

{
    int m = a[0];
    for(int i = 1; i < arraySize; i++)
    {
        m = m ^ a[i];
    }

    return m;
}

int main()

{
    int a[] = {4,2,1,1,2};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "The elements in the array are: ";

    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << "  ";
    }

    cout <<endl;

    cout << "The element occuring once is: " <<endl;
    cout << singleNum(a, n) <<endl;

    return 0;
}