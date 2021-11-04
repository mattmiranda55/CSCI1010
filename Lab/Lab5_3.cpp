#include<iostream>

using namespace std;

int main()

{
    double hours, otHours, payRate, otPayRate, grossPay, socialSecurity, fedIncome, stateIncome, netPay;
    double ssTotal, fiTotal, siTotal;   
    int unionFee;

    cout << "Please enter the number of hours worked: ";
    cin >> hours;

    otHours=hours-40;
    hours = hours - otHours;
    
    payRate = 16.78;
    otPayRate = payRate * 1.5;

    grossPay = (hours * payRate) + (otHours * otPayRate);
    
    unionFee = 10;

    socialSecurity = .06;
    fedIncome = .14;
    stateIncome = .05;

    ssTotal = grossPay * socialSecurity;
    fiTotal = grossPay * fedIncome;
    siTotal = grossPay * stateIncome;

    netPay = grossPay - ssTotal - fiTotal - siTotal + unionFee;

    cout << "Gross pay: $" << grossPay <<endl;
    cout << "Social Security Tax: $" << ssTotal <<endl;
    cout << "Federal Income Tax: $" << fiTotal <<endl;
    cout << "State Income Tax: $" << siTotal <<endl; 
    cout << "Union Dues: $" << unionFee <<endl;
    cout << "Net Income: $" <<netPay <<endl;

    return 0;

}