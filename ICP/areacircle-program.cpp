#include<iostream>

using namespace std;

int main ()

{
    double radius;
    double area;

    area = 3.14 * (radius * radius);

    cout << "Please enter the radius of the circle: ";
    cin >> radius;

    cout << "The area of the circle is: " << area << endl;

    return 0;
}