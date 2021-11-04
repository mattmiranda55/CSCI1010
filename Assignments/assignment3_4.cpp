#include<iostream>
#include<math.h>

using namespace std;

int main()

{
    double x , v , t , g , total;

    cout << "Please enter values for x, v, and t: ";
    cin >> x >> v >> t;
    
    g = 9.80665;

    total = x + v * t - g * pow(t , 2) / 2;

    cout << "The total is: " << total <<endl;

    return 0;
}