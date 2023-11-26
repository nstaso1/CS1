// Test2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName;
    string lastName;
    char sizeCode;
    int flourCode;
    int fillingCode;
    double baseCost;
    double flourCost;
    double fillingCost;
    bool flag_size;
    bool flag_flour;
    bool flag_filling;

    cout << "Please enter your first name:" << endl;
    cin >> firstName;
    cout << "Please enter your last name:" << endl;
    cin >> lastName;
    cout << "Hello " + firstName + " " + lastName << endl;
    cout << "Welcome to Subway Sandwich Store." << endl;
    cout << "Please enter sandwich size: [S]ix inch, [T]welve inch, [E]ighteen inch, or Two [F]eet:" << endl;
    cin >> sizeCode;
    flag_size = (sizeCode == 'S' || sizeCode == 'T' || sizeCode == 'E' || sizeCode == 'F');
    if (!flag_size)
    {
        cout << "We are unable to process your order because invalid size was entered." << endl;
        exit(0);
    }
    cout << "Enter 1 for wheat flour bread. Enter 2 for organic wheat flour bread. Enter 3 for multi grain bread. Enter 4 for organic multigrain bread:" << endl;
    cin >> flourCode;
    flag_flour = (flourCode == 1 || flourCode == 2 || flourCode == 3 || flourCode == 4);
    if (!flag_flour)
    {
        cout << "We are unable to process your order because invalid flour/bread was entered." << endl;
        exit(0);
    }
    cout << "Enter 1 for cheese filling. Enter 2 for artichokes filling. Enter 3 for Jalapenos filling. Enter 4 for extra cheese filling. Enter 5 for all fillings that we offer:" << endl;
    cin >> fillingCode;
    flag_filling = (fillingCode == 1 || fillingCode == 2 || fillingCode == 3 || fillingCode == 4 || fillingCode == 5);
    if (!flag_filling)
    {
        cout << "We are unable to process your order because invalid filling was entered." << endl;
        exit(0);
    }
    
    if (sizeCode == 'S')
    {
        baseCost = 1.03;
    }

    else if (sizeCode == 'T')
    {
        baseCost = 2.11;
    }
    else if (sizeCode == 'E')
    {
        baseCost = 3.39;
    }
    else if (sizeCode == 'F')
    {
        baseCost = 4.11;
    }

    if (flourCode == 1)
    {
        flourCost = 0;
    }

    else if (flourCode == 2)
    {
        flourCost = baseCost * 0.1011;
    }
    else if (flourCode == 3)
    {
        flourCost = baseCost * 0.1555;
    }
    else if (flourCode == 4)
    {
        flourCost = baseCost * 0.2012;
    }

    if (fillingCode == 1)
    {
        fillingCost = 0;
    }

    else if (fillingCode == 2)
    {
        fillingCost = 0.5 + (baseCost * .101);
    }
    else if (fillingCode == 3)
    {
        fillingCost = 0.25 + (baseCost * .155);
    }
    else if (fillingCode == 4)
    {
        fillingCost = 0.3 + (baseCost * .113);
    }
    else if (fillingCode == 5)
    {
        fillingCost = 0.5 + 0.3 + 0.25 + (baseCost * .101) + (baseCost * .155) + (baseCost * .113);
    }

    double tax = 0.101 * (baseCost + flourCost + fillingCost);

    double totalCost = baseCost + flourCost + fillingCost + tax;
    double originalCents = totalCost * 100;
    int roundedCents = static_cast<int>(originalCents + 0.5);
    int dollars = roundedCents / 100;
    int newCents = roundedCents % 100;

    cout << "Total cost for your sandwich is: " << dollars << " dollars " << "and " << newCents << " cents.";

    return 0;
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
