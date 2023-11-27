// Assignment6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double rainValues[12] = {};
    string months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

    double min = rainValues[0];

    double max = rainValues[0];

    int monthHighest = 0;

    int monthLowest = 0;

    cout << "Hello. Welcome to my rainfall calculation program." << endl;

    cout << "Enter·rainfall·for·January: " << endl;
    cin >> rainValues[0];
    cout << "Enter·rainfall·for·February: " << endl;
    cin >> rainValues[1];
    cout << "Enter·rainfall·for·March: " << endl;
    cin >> rainValues[2];
    cout << "Enter·rainfall·for·April: " << endl;
    cin >> rainValues[3];
    cout << "Enter·rainfall·for·May: " << endl;
    cin >> rainValues[4];
    cout << "Enter·rainfall·for·June: " << endl;
    cin >> rainValues[5];
    cout << "Enter·rainfall·for·July: " << endl;
    cin >> rainValues[6];
    cout << "Enter·rainfall·for·August: " << endl;
    cin >> rainValues[7];
    cout << "Enter·rainfall·for·September: " << endl;
    cin >> rainValues[8];
    cout << "Enter·rainfall·for·October: " << endl;
    cin >> rainValues[9];
    cout << "Enter·rainfall·for·November: " << endl;
    cin >> rainValues[10];
    cout << "Enter·rainfall·for·December: " << endl;
    cin >> rainValues[11];

    for (int n = 0; n < 12; n++)
    {
        if (rainValues[n] < 0)
        {
            cout << "Invalid data (negative rainfall) -- retry" << endl;
            exit(0);
        }
    }

    double total_Rain = rainValues[0] + rainValues[1] + rainValues[2] + rainValues[3] + rainValues[4] + rainValues[5] + rainValues[6] + rainValues[7] + rainValues[8] + rainValues[9] + rainValues[10] + rainValues[11];

    double avg_Rain = total_Rain / 12;



    for (int j = 0; j < 12; j++)
    {
        if (rainValues[j] < min)
        {
            min = rainValues[j];
            monthLowest = j;
        }
    }

    for (int i = 0; i < 12; i++)
    {
        if (rainValues[i] > max)
        {
            max = rainValues[i];
            monthHighest = i;
        }
    }

    string finalLowest = months[monthLowest];
    string finalHighest = months[monthHighest];


    cout << "Total·rainfall: " << total_Rain << endl;
    cout << "Average·rainfall: " << avg_Rain << endl;
    cout << "Least·rainfall·in: " << finalLowest << endl;
    cout << "Most·rainfall·in: " << finalHighest << endl;

    for (int i = 11; i >= 0; i--) {
        cout << rainValues[i] << " inches in " << months[i] << endl;
    }

    cout << "Thank you for using my rainfall calculation program." << endl;

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
