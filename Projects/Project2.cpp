// Matthew Miranda and Darian O'Dirling
// CSCI 1010 - 002
// Project 2
// This is an information management system

#include <iostream>
#include<string>

using namespace std;

const int MAX = 100;

void displayMenu()
{
    cout << "*** CSCI 1010 Student Information Management System***" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. Search By ID" << endl;
    cout << "3. Grade Statistics" << endl;
    cout << "4. Remove a student" << endl;
    cout << "5. Print all students" << endl;
    cout << "6. Exit the system" << endl;
    
}

int largestNumber(int grade[],int used)
{
    int largest = 0;

    for(int i = 1; i < used; i++)
    {
        if(grade[i] > largest)
        {
            largest = grade[i];
        }
    }

    return largest;
}

int smallestNumber(int grade[], int used)
{
    int smallest = 0;

    for(int i = 0; i < used; i++)
    {
        if(grade[i] < smallest)
        {
            smallest = grade[i];
        }
    }

    return smallest;
}

double average(int grade[], int used)
{
    int sum = 0, mean = 0, length = 0;

    for(int i = 0; i < used; i++)
    {
        sum = sum + grade[i];
        length++;
    }

    mean = sum / length;

    return mean;
}

int display(int id[], string name[], int grade[], int used)
{
    cout << "ID \t Name \t Grade" <<endl;
    
    for(int i = 1; i < used; i++)
    {
        cout << id[i] << "\t" << name[i] << "\t" << grade[i] <<endl;
    }

    return 0;
}

int search(int id[], string name[], int grade[],int used)
{
    int i;


    cout << "Please enter the ID: ";
    cin >> i;
    if (i > used)
    {
        cout << "Please enter a vaid ID:";
    }
    else
    {
        cout << "Student ID: " << id[i] << endl;
        cout << "Student Name: " << name[i] << endl;
        cout << "Student Grade: " << grade[i] << endl;
    }

    return 0;
    
}

int addStudent(int id[], string name[], int grade[], int used)
{

    id[used] = used;

    cout << "The ID of the student is: " << id[used] <<endl;
    
    cout << "Please enter the name of the student: ";
    cin >> name[used];
    cout << "Please enter the grade of the student: ";
    cin >> grade[used];
    
    
    return 0;
}
int removeStudent(int id[], string name[], int grade[], int used)
{

    int n, j, found = 0;
    cout << "Enter the ID of the student: ";
    cin >> n;
    for (int i = 0; i < used; i++)
    {
        if(id[i] == n)
        {
            for (j = i; i < (used); j++)
            {
                id[j] = id[j+1];
                found++;              
                used--;

            }
            
        }
    }

    if(found==0)
        cout<<"\nElement doesn't found in the Array!";
    else
        cout<<"\nElement Deleted Successfully!";
    cout<<endl;
    return 0;
}


int main()
{
    int used = 1, num;
    int id[MAX];
    string name[MAX];
    int grade[MAX];
    int choice;

    

    while(1)
    {
        displayMenu();
        cin >> choice;

        if(choice == 6)
        {
            break;
        }
        else if(choice > 6)
        {
            cout << "Error. Please choose an option 1-6" <<endl;
        }


        switch(choice)
        {
            case 1:
                addStudent(id,name,grade,used);
                used++;
                break;
            case 2:
                search(id,name,grade,used);
                break;
            case 3:
                cout << "The largest grade is: " << largestNumber(grade,used) <<endl;
                cout << "The smallest grade is: " << smallestNumber(grade,used) <<endl;
                cout << "The average grade is: " << average(grade,used) <<endl;
                break;
            case 4:
                removeStudent(id,name,grade,used);

                break;

            case 5:
                display(id,name,grade,used);
                break;
        }
       
    }
}
