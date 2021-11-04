// Matthew Miranda
// CSCI 1010 - 002
// Lab 11 Program 1
// This is a prohram that will take a string of numbers and output the smallest number

#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main()

{
   int i = 10, smallest = 0, num;

   cout << "Please enter 10 numbers: ";
   
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
   }

    cout << "The smallest number is: " << smallest <<endl;

    return 0;
}