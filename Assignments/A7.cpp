// Matthew Miranda
// CSCI 1010 - 002
// Assignment 7
// This program is a partially filled array practice program

#include<iostream>

using namespace std;

int main()

{
    const int max = 100;
    int a[max], num, used = 0, largest = 0;

    cout << "Please enter numbers ending in -1: ";

    for(int i = 0; i < max; i++)
    {
        cin >> num;

        if(num == -1)
        {
            break;
        }

        a[i] = num;

        used++;
    }

    cout << "The current elements in the array are: " <<endl;

    for(int i = 0; i < used; i++)
    {
        cout << a[i] << " ";
    }

    cout <<endl;

    for(int i = 0; i < used; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }

    cout << "The largest element is: " << largest <<endl;

    a[used] = 10;
    a[used + 1] = 15;
    used = used + 2;

    cout << "Now the elements are: ";

    for(int i = 0; i < used; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    for(int i = 1; i < used; i++)
    {
        for(int j = 0; j < used - i; j++)
        {
            if(a[j] < a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "After sorting, the elements are: ";

    for (int i = 0; i < used; i++)
    {
        cout << a[i] << " ";
    }

    cout <<endl;

    return 0;
}