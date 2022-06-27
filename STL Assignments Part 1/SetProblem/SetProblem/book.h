#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class book
{
public:
	book();
	book(int Rank, string Author, string BookTitle, int Published);

	void setRank(int Rank);
	int GetRank();

	void setAuthor(string Author);
	string GetAuthor();

	void setBookTitle(string BookTitle);
	string GetBookTitle();

	void setPublished(int Published);
	int GetPublished();

	string to_string();

	friend ostream& operator<<(ostream& out, const book& item);
	friend istream& operator>>(istream& in, book& item);

	friend bool operator<(const book& lhs, const book& rhs);
	friend bool operator>(const book& lhs, const book& rhs);
	friend bool operator>=(const book& lhs, const book& rhs);
	friend bool operator<=(const book& lhs, const book& rhs);
	friend bool operator==(const book& lhs, const book& rhs);

private:
	int rank, published;
	string author, bookTitle;

protected:

};

