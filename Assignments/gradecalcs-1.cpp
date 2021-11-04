// Matthew Miranda
// CSCI 1010 - 002
// Assignment 6 Program 4
// This is a program that will take 10 grades and calculate the highest, lowest, and the mean of the grades

#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main()

{
    int num, smallest, i, largest, mean;
    
    cout << "Please enter 10 grades: ";

    for(i = 1; i <= 10; i++)
    {
       cin >> num;
       if(i == 1)
        {
           smallest = num;
        }
       else
        {
          if(num < smallest)
          {
            smallest = num;
          }
        }

        if(i == 1)
        {
            largest = num;
        }
        else
        {
            if(num > largest)
            {
                largest = num;
            }
        }

        mean = (largest + smallest) / 2;
    }

    cout << "The largest number: " << largest <<endl;
    cout << "The smallest number: " << smallest <<endl;
    cout << "The mean of the grades is: " << mean <<endl;

    return 0;
}