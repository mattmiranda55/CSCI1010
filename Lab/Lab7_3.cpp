#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main()

{
    char gender;
    int height, age, weight;
    double mBMR, fBMR , barsF, barsM;

    cout << "Please enter M for Male or F for Female: ";
    cin >> gender;

    cout << "Please enter weight, height, and age: ";
    cin >> weight >> height >> age;

    if (gender == 'F')
    {
        fBMR = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
        barsF = fBMR / 230;
        cout << "You can eat " << barsF << " chocolate bars" <<endl;
    }
    else if (gender == 'M')
    {
        mBMR = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
        barsM = mBMR / 230;
        cout << "You can eat " << barsM << " chocolate bars" <<endl;
    }
    
    return 0;
}