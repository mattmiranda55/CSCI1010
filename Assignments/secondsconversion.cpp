#include<iostream>
#include<math.h>

using namespace std;

int main()

{
    int time , hours , minutes , seconds;

    cout << "Please enter the time in seconds: ";
    cin >> time;

    hours = time / 3600;
    minutes = (time % 3600) / 60;
    seconds = time % 60;

    cout << "The time is " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds." <<endl;

    return 0;

}