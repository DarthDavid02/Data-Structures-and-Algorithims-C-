// ch6ex29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double min(double, double);
void max(double, double, double&, double&);
int main()
{
    double area, length, width = .001, vol, height, mLen, mWidth, mHeight, mVol = -1;
    cout << setprecision(3) << fixed << showpoint;
    cout << "Enter the area of the flat cardboard: ";
    cin >> area;

    while (width <= area)
    {
        length = area / width;
        max(length, width, vol, height);
        if (vol > mVol)
        {
            mLen = length;
            mWidth = width;
            mHeight = height;
            mVol = vol;
        }
        width += .001;
    }
    cout << "The dimentions of card to maximize the cardboard box has a volume of " << mVol << endl;
    cout << "Length: " << mLen << "\nWidth: " << mWidth << endl;
    cout << "The dimensins of the cardboard box\n";
    cout << "Length: " << mLen - 2 * mHeight << "\nWidth: " << mWidth - 2 * mHeight << "\nHeight: " << mHeight << endl;
    return 0;
}

void max(double l, double w, double& max, double& mside)
{
    double vol, ss;
    mside = min(l, w);
    ss = .001;
    max = -1;
    while (mside > ss * 2)
    {
        vol = (l - ss * 2) * (w - ss * 2) * ss;
        if (vol > max)
        {
            max = vol;
            mside = ss;
        }
        ss += .001;
    }
}
double min(double l, double w)
{
    if (l < w)
    {
        return l;
    }
    else
    {
        return w;
    }
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
