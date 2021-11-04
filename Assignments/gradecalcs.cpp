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
    int g1, g2, g3, g4, g5, g6, g7, g8, g9, g10;
    double mean;

    cout << "Please enter a grade: ";
    cin >> g1;
    cout << "Please enter a grade: ";
    cin >> g2;
    cout << "Please enter a grade: ";
    cin >> g3;
    cout << "Please enter a grade: ";
    cin >> g4;
    cout << "Please enter a grade: ";
    cin >> g5;
    cout << "Please enter a grade: ";
    cin >> g6;
    cout << "Please enter a grade: ";
    cin >> g7;
    cout << "Please enter a grade: ";
    cin >> g8;
    cout << "Please enter a grade: ";
    cin >> g9;
    cout << "Please enter a grade: ";
    cin >> g10;

    if(g1 > g2 && g1 > g3 && g1 > g4 && g1 > g5 && g1 > g6 && g1 > g7 && g1 > g8 && g1 > g9 && g1 > g10)
    {
        cout << "The largest grade is: " <<g1 <<endl;
    }    
    else if(g2 > g1 && g2 > g3 && g2 > g4 && g2 > g5 && g2 > g6 && g2 > g7 && g2 > g8 && g2 > g9 && g2 > g10)
    {
        cout << "The largest grade is: " <<g2 <<endl;
    }
    else if(g3 > g1 && g3 > g2 && g3 > g4 && g3 > g5 && g3 > g6 && g3 > g7 && g3 > g8 && g3 > g9 && g3 > g10)
    {
        cout << "The largest grade is: " <<g3 <<endl;
    }
    else if(g4 > g1 && g4 > g2 && g4 > g3 && g4 > g5 && g4 > g6 && g4 > g7 && g4 > g8 && g4 > g9 && g4 > g10)
    {
        cout << "The largest grade is: " <<g4 <<endl;
    }
    else if(g5 > g1 && g5 > g2 && g5 > g3 && g5 > g4 && g5 > g6 && g5 > g7 && g5 > g8 && g5 > g9 && g5 > g10)
    {
        cout << "The largest grade is: " <<g5 <<endl;
    }
    else if(g6 > g1 && g6 > g2 && g6 > g3 && g6 > g4 && g6 > g5 && g6 > g7 && g6 > g8 && g6 > g9 && g6 > g10)
    {
        cout << "The largest grade is: " <<g6 <<endl;
    }
    else if(g7 > g1 && g7 > g2 && g7 > g3 && g7 > g4 && g7 > g5 && g7 > g6 && g7 > g8 && g7 > g9 && g7 > g10)
    {
        cout << "The largest grade is: " <<g7 <<endl;
    }
    else if(g8 > g1 && g8 > g2 && g8 > g3 && g8 > g4 && g8 > g5 && g8 > g6 && g8 > g7 && g8 > g9 && g8 > g10)
    {
        cout << "The largest grade is: " <<g8 <<endl;
    }
    else if(g9 > g1 && g9 > g2 && g9 > g3 && g9 > g4 && g9 > g5 && g9 > g6 && g9 > g7 && g9 > g8 && g9 > g10)
    {
        cout << "The largest grade is: " <<g9 <<endl;
    }
    else if(g10 > g1 && g10 > g2 && g10 > g3 && g10 > g4 && g10 > g5 && g10 > g6 && g10 > g7 && g10 > g8 && g10 > g9)
    {
        cout << "The largest grade is: " <<g10 <<endl;
    }
    
    if(g1 < g2 && g1 < g3 && g1 < g4 && g1 < g5 && g1 < g6 && g1 < g7 && g1 < g8 && g1 < g9 && g1 < g10)
    {
        cout << "The lowest grade is: " <<g1 <<endl;
    }    
    else if(g2 < g1 && g2 < g3 && g2 < g4 && g2 < g5 && g2 < g6 && g2 < g7 && g2 < g8 && g2 < g9 && g2 < g10)
    {
        cout << "The lowest grade is: " <<g2 <<endl;
    }
    else if(g3 < g1 && g3 < g2 && g3 < g4 && g3 < g5 && g3 < g6 && g3 < g7 && g3 < g8 && g3 < g9 && g3 < g10)
    {
        cout << "The lowest grade is: " <<g3 <<endl;
    }
    else if(g4 < g1 && g4 < g2 && g4 < g3 && g4 < g5 && g4 < g6 && g4 < g7 && g4 < g8 && g4 < g9 && g4 < g10)
    {
        cout << "The lowest grade is: " <<g4 <<endl;
    }
    else if(g5 < g1 && g5 < g2 && g5 < g3 && g5 < g4 && g5 < g6 && g5 < g7 && g5 < g8 && g5 < g9 && g5 < g10)
    {
        cout << "The lowest grade is: " <<g5 <<endl;
    }
    else if(g6 < g1 && g6 < g2 && g6 < g3 && g6 < g4 && g6 < g5 && g6 < g7 && g6 < g8 && g6 < g9 && g6 < g10)
    {
        cout << "The lowest grade is: " <<g6 <<endl;
    }
    else if(g7 < g1 && g7 < g2 && g7 < g3 && g7 < g4 && g7 < g5 && g7 < g6 && g7 < g8 && g7 < g9 && g7 < g10)
    {
        cout << "The lowest grade is: " <<g7 <<endl;
    }
    else if(g8 < g1 && g8 < g2 && g8 < g3 && g8 < g4 && g8 < g5 && g8 < g6 && g8 < g7 && g8 < g9 && g8 < g10)
    {
        cout << "The lowest grade is: " <<g8 <<endl;
    }
    else if(g9 < g1 && g9 < g2 && g9 < g3 && g9 < g4 && g9 < g5 && g9 < g6 && g9 < g7 && g9 < g8 && g9 < g10)
    {
        cout << "The lowest grade is: " <<g9 <<endl;
    }
    else if(g10 < g1 && g10 < g2 && g10 < g3 && g10 < g4 && g10 < g5 && g10 < g6 && g10 < g7 && g10 < g8 && g10 < g9)
    {
        cout << "The lowest grade is: " <<g10 <<endl;
    }

    mean = (g1+g2+g3+g4+g5+g6+g7+g8+g9+g10) / 10;

    cout << "The mean of the grades is: " << mean <<endl;

    return 0;
}