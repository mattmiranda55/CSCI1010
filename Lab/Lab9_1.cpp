// Matthew Miranda
// CSCI 1010 -002
// Lab 9 Program 1
// This is a program that will allow a user to enter a weight and the program will output how many 16, 8, 4, 2, and 1 ounce weights are needed

#include<iostream>
#include<math.h>
#include<string> 

using namespace std;

int main()

{
    int weight = 0;
    int sixteen = 0;
    int eight = 0;
    int four = 0;
    int two = 0;
    int one = 0;

    cout << "Please enter a weight: ";
    cin >> weight;

    while (weight >= 16)
    {
        sixteen = weight / 16;
        weight = weight % 16;
    }
    while (weight >= 8)
    {
        eight = weight / 8;
        weight = weight % 8;
    }
    while (weight >= 4)
    {
        four = weight / 4;
        weight = weight % 4;
    }
    while (weight >= 2)
    {
        two = weight / 2;
        weight = weight % 2;
    }
    while (weight >= 1)
    {
        one = weight / 1;
        weight = weight % 1;
    }

    cout << "You need: " <<endl;
    cout << sixteen << " 16-ounce weights" <<endl;
    cout << eight << " 8-ounce weights" <<endl;
    cout << four << " 4-ounce weights" <<endl;
    cout << two << " 2-ounce weights" <<endl;
    cout << one << " 1-ounce weights" <<endl;

    return 0;    
}