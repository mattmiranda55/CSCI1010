#include <iostream>
#include <math.h>

using namespace std;

int main()

{
    int x1 , y1 , x2 , y2;
    double distance;
    x2 = 0; 
    y2 = 0;

    cout << "Please enter the x and y values of an ordered pair: ";
    cin >> x1 >> y1;

    distance = sqrt(pow(x2 - x1 , 2) + pow(y2 - y1 , 2));

    cout << "The euclidean distance between the ordered pair and the origin is: " << distance << endl;

    return 0;

}