// Matthew Miranda
// CSCI 1010 - 002
// Lab 13 Program 2
// This program is a partially filled array practice problem

#include<iostream>

using namespace std;

int main()

{
    const int max = 100;
    int a[max], used = 0;

    cout << "Enter 8 numbers for the array: " <<endl;

    for(int i = 0; i < max; i++)
    {
        cin >> a[i];
        used++;
        
        if(used == 8)
        {
            break;
        }
    }

    cout << "The current elements in the array are: " <<endl;

    for(int i = 0; i < used; i++)
    {
        cout << a[i] << "  ";
    }

    cout <<endl;
    
    used++;
    
    for(int i = used; i > 0; i--)
    {
        a[i] = a[i - 1];
    }

    a[0] = 18;

    cout << "After inserting 18 as the first element, the numbers in the array are: " <<endl;

    for(int i = 0; i < used; i++)
    {
        cout << a[i] << "  ";
    }

    cout <<endl;

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

    cout << "After sorting the array in descending order: " <<endl;

    for(int i = 0; i < used; i++)
    {
        cout << a[i] << "  ";
    }

    cout <<endl;

    return 0;
}