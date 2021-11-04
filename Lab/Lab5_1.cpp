#include<iostream>

using namespace std;

int main()

{
    double radius , height , volume;

    cout << "Please enter the radius: ";
    cin >> radius;

    cout << "Please enter the height: ";
    cin >> height;

    volume = 3.14*radius*radius*height;

    cout << "The volume of the cylinder is: " << volume <<endl;

    return 0;
}