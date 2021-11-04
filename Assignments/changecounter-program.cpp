#include<iostream>

using namespace std;

int main()

{
    int quarters , dimes , nickles;

    cout << "Number of quarters: ";
    cin >> quarters;

    cout << "Numbers of dimes: ";
    cin >> dimes;

    cout << "Number of nickles: ";
    cin >> nickles;

    int total;
    total = (quarters * 25) + (dimes * 10) + (nickles * 5);

    cout << "There is " << total << " cents in total" <<endl;

    return 0;
}