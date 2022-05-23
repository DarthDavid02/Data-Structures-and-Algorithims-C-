#pragma once
#include <string>
using namespace std;

class medRec
{
public:
	medRec();
	medRec(string FName, string LName, int HeightInches, int Weight);
	~medRec();

	void SetFName(string FName);
	string getFName();

	void SetLName(string LName);
	string getLName();

	void SetHeightInches(int HeightInches);
	int getHeightInches();

	void SetWeight(int Weight);
	int getWeight();

	string to_string();

private:
	string fName, lName;
	int heightInches, weight;
protected:

};

