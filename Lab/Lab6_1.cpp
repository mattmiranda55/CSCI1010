#include<iostream>
#include<math.h>

using namespace std;

int main()

{
    double windChill , temperature , windSpeed;

    cout << "Please enter the temperature: ";
    cin >> temperature;

    cout << "Please enter the wind speed: ";
    cin >> windSpeed;

    windChill = 35.74 + .6215 * temperature + (.4275 * temperature - 35.75) * pow(windSpeed , .16 );

    cout << "The wind chill is: " << windChill << endl;

    return 0;
}