// Matthew Miranda
// CSCI 1010 - 002
// Lab 9 Program 2
// This is a program to play rock-paper-scissors

#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int main()

{
    char p1, p2;

    cout << "Player 1, please show your choice: ";
    cin >> p1;

    cout << "Player 2, please show your choice: ";
    cin >> p2;

    if ((p1 == 'p' && p2 == 'r') || (p1 == 'P' && p2 == 'R'))
    {
        cout << "Player 1 wins!" <<endl;
    }
    else if ((p1 == 'r' && p2 == 's') || (p1 == 'R' && p2 == 'S'))
    {
        cout << "Player 1 wins!" <<endl;
    }
    else if ((p1 == 's' && p2 == 'p') || (p1 == 'S' && p2 == 'P'))
    {
        cout << "Player 1 wins!" <<endl;
    }
    else if ((p1 == 'r' && p2 == 'p') || (p1 == 'R' && p2 == 'P'))
    {
        cout << "Player 2 wins!" <<endl;
    }
    else if ((p1 == 's' && p2 == 'r') || (p1 == 'S' && p2 == 'R'))
    {
        cout << "Player 2 wins!" <<endl;
    }
    else if ((p1 == 'p' && p2 == 's') || (p1 == 'P' && p2 == 'S'))
    {
        cout << "Player 2 wins!" <<endl;
    }
    else if ((p1 = p2) || (p2 = p1))
    {
        cout << "Tie!" <<endl;
    }

    return 0;
}