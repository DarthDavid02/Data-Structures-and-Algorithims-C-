#include "book.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

book::book()
{
	rank = 0;
	author = "";
	bookTitle = "";
	published = 0;
}

book::book(int Rank, string Author, string BookTitle, int Published)
{
	rank = Rank;
	author = Author;
	bookTitle = BookTitle;
	published = Published;
}

void book::setRank(int Rank)
{
	rank = Rank;
}
int book::GetRank()
{
	return rank;
}

void book::setAuthor(string Author)
{
	author = Author;
}
string book::GetAuthor()
{
	return author;
}

void book::setBookTitle(string BookTitle)
{
	bookTitle = BookTitle;
}
string book::GetBookTitle()
{
	return bookTitle;
}

void book::setPublished(int Published)
{
	published = Published;
}
int book::GetPublished()
{
	return published;
}

string book::to_string()
{
	return " ";
}

ostream& operator<<(ostream& out, const book& item)
{
	out << "Rank: " << item.rank << "\nAuthor: " << item.author << "\nBook Title: " << item.bookTitle << "\nYear Published: "
		<< item.published << endl;
	return out;
}
/*istream& operator>>(istream& in, book& item)
{

}
*/

bool operator<(const book& lhs, const book& rhs)
{
	return lhs.rank < rhs.rank;
}
bool operator>(const book& lhs, const book& rhs)
{
	return lhs.rank > rhs.rank;
}
bool operator>=(const book& lhs, const book& rhs)
{
	return lhs.published >= rhs.published;
}
bool operator<=(const book& lhs, const book& rhs)
{
	return lhs.published >= rhs.published;
}
bool operator==(const book& lhs, const book& rhs)
{
	return ((lhs.rank == rhs.rank) && (lhs.author == rhs.author) && (lhs.bookTitle == rhs.bookTitle) && (lhs.published == rhs.published));
}