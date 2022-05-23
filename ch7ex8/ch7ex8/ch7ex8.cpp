#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	int counter;
	string firstName, lastName, ssn, userid, password;

	cout << "Enter First Name: ";
	cin >> firstName;
	cout << endl;

	cout << "Enter Last Name: ";
	cin >> lastName;
	cout << endl;

	cout << "Please Enter SSN (no spaces required): ";
	cin >> ssn;
	cout << endl;

	cout << "Please Enter User ID: ";
	cin >> userid;
	cout << endl;

	cout << "Please Enter password: ";
	cin >> password;
	cout << endl;

	cout << "Name: " << firstName << " " << lastName << endl;
	cout << "SSN:  xxx-xx-xxxx" << endl;
	cout << "User ID: ";
	for (counter = 0; counter < userid.length(); counter++)
	{
		cout << "x";
	}
	cout << endl;
	cout << "Password: ";
	for (counter = 0; counter < password.length(); counter++)
	{
		cout << "x";
	}

	cout << endl;
	return(0);
}