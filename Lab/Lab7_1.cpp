#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main()

{
    int s1, s2, s3, total;

    cout << "Please enter the values for the three angles: ";
    cin >> s1 >> s2 >> s3;

    total = s1 + s2 + s3;

    if(total == 180)
    {
        cout << "That is a triangle!" <<endl;
    }
    else
    {
        cout << "That is not a triangle!" <<endl;
    }

    return 0;
}