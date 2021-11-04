#include<iostream>
#include<math.h>

using namespace std;

int main()

{
    int y0 , y , m , m0 , x , d , d0;
    
    cout << "Please enter a four digit year: ";
    cin >> y;

    cout << "Please enter a month, using 1 to 12 to represent January to December: ";
    cin >> m;

    cout << "Please enter a date, using 1 to 31: ";
    cin >> d;

    y0 = y - (14-m) / 12;
    x = y0 + y0 / 4 - y0 / 100 + y0 / 400;
    m0 = m + 12 * ((14-m)/12) - 2;
    d0 = (d+x+(31*m0)/12) % 7;

    cout << "The day of the week is: " << d0 <<endl;

    return 0;
}

