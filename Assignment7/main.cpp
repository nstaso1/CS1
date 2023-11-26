// Assignment7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    string monkeys[3] = { "Monkey #1", "Monkey #2", "Monkey #3" };
    string days[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    int food[3][7];

   
    int dayHighest = 0;
    int dayLowest = 0;
    int monkeyHighest = 0;
    int monkeyLowest = 0;


    cout << "Hello. Welcome to my food calculation program." << endl;

    cout << "Enter·the·food·eaten·by·monkey·#1·on·Sunday:";
    cin >> food[0][0];

    cout << "Enter·the·food·eaten·by·monkey·#2·on·Sunday:";
    cin >> food[1][0];

    cout << "Enter·the·food·eaten·by·monkey·#3·on·Sunday:";
    cin >> food[2][0];

    cout << "Enter·the·food·eaten·by·monkey·#1·on·Monday:";
    cin >> food[0][1];

    cout << "Enter·the·food·eaten·by·monkey·#2·on·Monday:";
    cin >> food[1][1];

    cout << "Enter·the·food·eaten·by·monkey·#3·on·Monday:";
    cin >> food[2][1];

    cout << "Enter·the·food·eaten·by·monkey·#1·on·Tuesday:";
    cin >> food[0][2];

    cout << "Enter·the·food·eaten·by·monkey·#2·on·Tuesday:";
    cin >> food[1][2];

    cout << "Enter·the·food·eaten·by·monkey·#3·on·Tuesday:";
    cin >> food[2][2];

    cout << "Enter·the·food·eaten·by·monkey·#1·on·Wednesday:";
    cin >> food[0][3];

    cout << "Enter·the·food·eaten·by·monkey·#2·on·Wednesday:";
    cin >> food[1][3];

    cout << "Enter·the·food·eaten·by·monkey·#3·on·Wednesday:";
    cin >> food[2][3];

    cout << "Enter·the·food·eaten·by·monkey·#1·on·Thursday:";
    cin >> food[0][4];

    cout << "Enter·the·food·eaten·by·monkey·#2·on·Thursday:";
    cin >> food[1][4];

    cout << "Enter·the·food·eaten·by·monkey·#3·on·Thursday:";
    cin >> food[2][4];

    cout << "Enter·the·food·eaten·by·monkey·#1 on·Friday:";
    cin >> food[0][5];

    cout << "Enter·the·food·eaten·by·monkey·#2·on·Friday:";
    cin >> food[1][5];

    cout << "Enter·the·food·eaten·by·monkey·#3·on·Friday:";
    cin >> food[2][5];

    cout << "Enter·the·food·eaten·by·monkey·#1·on·Saturday:";
    cin >> food[0][6];

    cout << "Enter·the·food·eaten·by·monkey·#2·on·Saturday:";
    cin >> food[1][6];

    cout << "Enter·the·food·eaten·by·monkey·#3·on·Saturday:";
    cin >> food[2][6];

    for (int cols = 0; cols < 7; cols++)
    {
        for (int rows = 0; rows < 3; rows++)
        {
            if (food[rows][cols] < 0)
            {
                cout << "Invalid data (negative food) -- retry" << endl;
                exit(0);
            }
        }
    }

    int total_Food = food[0][0] + food[1][0] + food[2][0] + food[0][1] + food[1][1] + food[2][2] + food[0][1] + food[1][1] + food[2][1] + food[0][2] + food[1][2] + food[2][3] + food[0][4] + food[1][4] + food[2][4] + food[0][5] + food[1][5] + food[2][5] + food[0][6] + food[1][6] + food[2][6];
    double avg_Food = total_Food / 7.0;

    int max = food[0][0];
    int min = food[0][0];

    for (int rows = 0; rows < 3; rows++)
    {
        for (int cols = 0; cols < 7; cols++)
        {
            if (food[rows][cols] < min)
            {

                min = food[rows][cols];
                dayLowest = cols;
                monkeyLowest = rows;
            }

            if (food[rows][cols] > max)
            {
                max = food[rows][cols];
                dayHighest = cols;
                monkeyHighest = rows;
            }
        }
    }

    string finaldayLowest = days[dayLowest];
    string finaldayHighest = days[dayHighest];

    string finalmonkeyLowest = monkeys[monkeyLowest];
    string finalmonkeyHighest = monkeys[monkeyHighest];


    cout << "Total food consumed: " << total_Food << endl;
    cout << "Average·food·consumed·daily: " << avg_Food << endl;
    cout << "The·least·daily·food·consumed·was: " << min << " with " << finalmonkeyLowest << " on " << finaldayLowest << endl;
    cout << "The·most·daily·food·consumed·was: " << max << " with " << finalmonkeyHighest << " on " << finaldayHighest << endl;

    cout << "Thank you for using my food calculation program." << endl;
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
