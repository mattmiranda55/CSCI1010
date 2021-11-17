// Matthew Miranda
// CSCI 1010 - 002
// Lab 13 Program 1
// This is a program that will reverse the elements in the given array

#include<iostream>

using namespace std;

int main()

{
    int a[] = {10,15,20,25,30,35,40,45,50,55}, length = 10;

    for(int i = 1; i < length; i++)
    {
        for(int j = 0; j < length - i; j++)
        {
            if(a[j] < a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "The reversed elements are: " <<endl;

    for(int i = 0; i < length; i++)
    {
        cout << a[i] << "  ";
    }

    cout <<endl;

    return 0;
}