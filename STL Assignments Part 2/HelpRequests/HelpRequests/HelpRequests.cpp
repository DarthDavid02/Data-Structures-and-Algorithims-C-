// HelpRequests.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <queue>
using namespace std;

//global variables
int answer;
int i = 1;

//The queue for the student names
queue<string> student;

int main()
{
    do
    {
        //This is the menu interface
        cout << "Student:" << endl;
        cout << "Enter 1 to enter your name to be entered into the teacher's queue." << endl;
        cout << "\nTeacher:" << endl;
        cout << "Enter 2 to pull a name from the queue" << endl;
        cout << "Enter 999 to end the program" << endl << endl;
        cin >> answer;

        //This allows for a name to be inputted into the queue by the user
        if (answer == 1)
        {
            string name;

            cout << "Please enter your name here >> ";
            cin >> name;
            student.push(name);
            cout << "Your name has been entered into the queue. "
                "You are in position " << i << "." << endl << endl;
            i++;
        }
        //This allows the 'Teacher' to pull a student's name from the queue
        else if (answer == 2)
        {
            string aName;
            aName = student.front();
            student.pop();
            cout << "The next student in line is " << aName << endl << endl;
        }
        //This allows the user to exit the program only when the queue is empty
    } while (answer != 999 || !student.empty());   
}
