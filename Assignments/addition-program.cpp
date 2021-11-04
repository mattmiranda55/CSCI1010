#include<iostream>

using namespace std;

int main ()

{
    int number1 , number2;
    int total;

    cout << "Please enter two integers: ";
    cin >> number1 >> number2;

    total = number1 + number2;
    
    cout << number1 << " + " << number2 << " = " << total <<endl;

    return 0;
    
}