#include <iostream>
using namespace std;

int main()
{
    int randArray[30];
    for (int i = 0; i < 30; i++)
        randArray[i] = rand() % 50 + 1;  //Generate number between 1 to 50

    cout << "\nElements of the array::" << endl;

    for (int i = 0; i < 30; i++)
        cout << "Random number " << i + 1 << ": " << randArray[i] << endl;
    return 0;
}
