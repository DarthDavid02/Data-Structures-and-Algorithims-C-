#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <iterator>
#include <set>
using namespace std;
int main()
{
    string word;
    //STL set 
    set<string> words;

    //Do-while loop for user input
    do
    {
        cout << "Enter any word. Type DONE when you want to quit" << endl;
        cin >> word;
        if (word == "DONE")
        {
            words.erase("DONE");
        }
        else
        {
            words.insert(word);
        }
    } while (word != "DONE");

    //printing the set
    set<string>::iterator Itr;
    cout << "\nThese are the words that were inputted: \n";
    for (Itr = words.begin(); Itr != words.end(); Itr++)
    {
        cout << *Itr << " ";
    }
    
    //printing the number of words in the set
    cout << "\nThe number of words that were inputted is: " << words.size() << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
