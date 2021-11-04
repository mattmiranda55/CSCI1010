#include<iostream>

using namespace std;

int main()

{
    int n = 123456789;
    int m = 0;

    while(n != 0)
    {
        m = (10 * m) + (n % 10);
        n = n / 10;
        cout << "n in while loop: " << n <<endl;
        cout << "m in while loop: " << m <<endl;
    }

    cout << "n after while loop: " << n <<endl;
    cout << "m after while loop: " << m <<endl;

    return 0;
}