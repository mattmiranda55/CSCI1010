#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main()

{
    int number;

    cout << "Please enter a number, no more than 4 digits: ";
    cin >> number;

    if (number > 0 && number <= 9)
    {
        cout << "One digit" <<endl;
    }
    else if (number >= 10 && number <= 99)
    {
        cout << "Two digits" <<endl;
    }
    else if (number >= 100 && number <= 999)
    {
        cout << "Three digits" <<endl;
    }
    else if (number >= 1000 && number <= 9999)
    {
        cout << "Four digits" <<endl;
    }

    return 0;
}