#include<iostream>

using namespace std;

int main()

{
    double cb , espresso , cbTotal , espressoTotal , overallTotal;

    cout << "Number of Cheeseburgers: ";
    cin >> cb;
    cbTotal = cb * 5.89;

    cout << "Number of Espressos: ";
    cin >> espresso;
    espressoTotal = espresso * 3.99;

    overallTotal = cbTotal + espressoTotal;
    cout << "The total for the customer is: " << overallTotal <<endl;

    return 0;

}