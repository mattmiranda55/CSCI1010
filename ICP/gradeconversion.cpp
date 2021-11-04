#include<iostream>
#include<string>

using namespace std;

int main()

{
    int gradeNumber, gradeLetter;

    cout << "Please enter the numerical grade: ";
    cin >> gradeNumber;

    if (gradeNumber >= 90 && gradeNumber < 100)
    {
        gradeLetter = A;
    }
    else if (gradeNumber >= 80 && gradeNumber < 89)
    {
        gradeLetter = B;
    }
    else if (gradeNumber >= 70 && gradeNumber < 79)
    {
        gradeLetter = C;
    }
    else if (gradeNumber >= 60 && gradeNumber < 69)
    {
        gradeLetter = D;
    }
    else if (gradeNumber >= 0 && gradeNumber < 59)
    {
        gradeLetter = F;
    }

    cout << "The grade is: " << gradeLetter <<endl;

    return 0;

}