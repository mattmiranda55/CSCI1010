#include<iostream>

using namespace std;

int main()

{
    double miles;

    cout << "Please enter how many miles you would like to convert: ";
    cin >> miles;
    
    double kilometers;

    kilometers = miles * 1.6;

    cout << miles << " miles equals " << kilometers <<" kilometers" <<endl;

    return 0;

}