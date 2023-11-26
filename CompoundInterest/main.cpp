// CompoundInterest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double P;
    double r;
    int n;
    int q;
    double A;
    
    cout << "Can you put in your intial deposit in dollars? (don't need to type $ sign)" << "\n";
    cin >> P;
    cout << "Can you put in your annual interest rate in decimalized fraction? (not in percent)" << "\n";
    cin >> r;
    cout << "Can you put in the number of years your intial deposit was left in deposit for?" << "\n";
    cin >> n;
    cout << "Can you put in the number of times your compounding is done per year?" << "\n";
    cin >> q;

    A = P * (pow((1 + (r / q)), (n * q)));

    cout << "Compound Interest = " << A << "\n";

    cout << "Thank you for using my Compound Interest Calculation Program!";

    


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
