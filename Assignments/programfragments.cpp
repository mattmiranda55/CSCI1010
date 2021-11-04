#include<iostream>

using namespace std;

int main()

{
    int i , j;
    
    i = 5;
    j = 3 - 2 * i++;
    cout << "i: " << i << endl;
    cout << "j: " << j << endl;

    return 0;
}