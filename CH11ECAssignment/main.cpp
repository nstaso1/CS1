#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;
const int SIZE = 10;

struct BudgetTrack
{
    //makes double variables
    double housingAMT;
    double utilitiesAMT;
    double householdAMT;
    double transportationAMT;
    double foodAMT;
    double medicalAMT;
    double insuranceAMT;
    double entertainmentAMT;
    double clothingAMT;
    double miscAMT;
};

//stores the categories
const char* budgetTypes[] = { "housingAMT","utilitiesAMT","householdAMT",
"transportationAMT","foodAMT","medicalAMT","insuranceAMT","entertainmentAMT",
"clothingAMT","miscellaneousAMT" };

//values for budget
const double budget[] = { 500.00,150.00,65.00,50.00,250.00,
30.00,100.00,150.00,75.00, 50.00 };

void getData(BudgetTrack *budgetTrack);
void report(BudgetTrack *budgetTrack);

int main()
{
    BudgetTrack budget;
    getData(&budget);
    report(&budget);
    return 0;
}

// prints expensesAMT
void report(BudgetTrack* BudgetTrack)
{
    double difference = 0;
    double total_spent = 0;
    double total_budget = 0;
    for (int index = 0; index < SIZE; index++)
        total_budget += budget[index];  

    cout << left << setw(20) << "Category"
        << setw(20) << "Budgeted"
        << setw(20) << "Spent"
        << setw(20) << "Over(-)/Under" << endl;

    cout << "-------------------------------------------------------------" << endl;

    difference = budget[0] - BudgetTrack->housingAMT;
    total_spent += BudgetTrack->housingAMT;
    cout << fixed << setprecision(2) << left << setw(20) << budgetTypes[0]
        << setw(20) << budget[0]
        << setw(20) << BudgetTrack->housingAMT
        << setw(20) << difference << endl;

    total_spent += BudgetTrack->utilitiesAMT;
    difference = budget[1] - BudgetTrack->utilitiesAMT;
    cout << fixed << setprecision(2) << left << setw(20) << budgetTypes[1]
        << setw(20) << budget[1]
        << setw(20) << BudgetTrack->utilitiesAMT
        << setw(20) << difference << endl;

    total_spent += BudgetTrack->householdAMT;
    difference = budget[2] - BudgetTrack->householdAMT;
    cout << fixed << setprecision(2) << left << setw(20) << budgetTypes[2]
        << setw(20) << budget[2]
        << setw(20) << BudgetTrack->householdAMT
        << setw(20) << difference << endl;

    total_spent += BudgetTrack->transportationAMT;
    difference = budget[3] - BudgetTrack->transportationAMT;
    cout << fixed << setprecision(2) << left << setw(20) << budgetTypes[3]
        << setw(20) << budget[3]
        << setw(20) << BudgetTrack->transportationAMT
        << setw(20) << difference << endl;

    total_spent += BudgetTrack->foodAMT;
    difference = budget[4] - BudgetTrack->foodAMT;
    cout << fixed << setprecision(2) << left << setw(20) << budgetTypes[4]
        << setw(20) << budget[4]
        << setw(20) << BudgetTrack->foodAMT
        << setw(20) << difference << endl;

    total_spent += BudgetTrack->medicalAMT;
    difference = budget[5] - BudgetTrack->medicalAMT;
    cout << fixed << setprecision(2) << left << setw(20) << budgetTypes[5]
        << setw(20) << budget[5]
        << setw(20) << BudgetTrack->medicalAMT
        << setw(20) << difference << endl;

    total_spent += BudgetTrack->insuranceAMT;
    difference = budget[6] - BudgetTrack->insuranceAMT;
    cout << fixed << setprecision(2) << left << setw(20) << budgetTypes[6]
        << setw(20) << budget[6]
        << setw(20) << BudgetTrack->insuranceAMT
        << setw(20) << difference << endl;

    total_spent += BudgetTrack->entertainmentAMT;
    difference = budget[7] - BudgetTrack->entertainmentAMT;
    cout << fixed << setprecision(2) << left << setw(20) << budgetTypes[7]
        << setw(20) << budget[7]
        << setw(20) << BudgetTrack->entertainmentAMT
        << setw(20) << difference << endl;

    total_spent += BudgetTrack->clothingAMT;
    difference = budget[8] - BudgetTrack->clothingAMT;
    cout << fixed << setprecision(2) << left << setw(20) << budgetTypes[8]
        << setw(20) << budget[8]
        << setw(20) << BudgetTrack->clothingAMT
        << setw(20) << difference << endl;

    total_spent += BudgetTrack->miscAMT;
    difference = budget[9] - BudgetTrack->miscAMT;
    cout << fixed << setprecision(2) << left << setw(20) << budgetTypes[9]
        << setw(20) << budget[9]
        << setw(20) << BudgetTrack->miscAMT
        << setw(20) << difference << endl;

    // Prints how much you are above/under budget
    if (total_spent < total_budget)
        cout << "For the month you are under budget by $" <<
        (total_budget - total_spent) << endl;
    else
        cout << "For the month you are above budget by $" <<
        (total_spent - total_budget) << endl;
}

// Input for the User
void getData(BudgetTrack* BudgetTrack)
{

    cout << "Enter the amount spent on " << budgetTypes[0] << ":";
    cin >> BudgetTrack->housingAMT;
    cout << "Enter the amount spent on " << budgetTypes[1] << ":";
    cin >> BudgetTrack->utilitiesAMT;
    cout << "Enter the amount spent on " << budgetTypes[2] << ":";
    cin >> BudgetTrack->householdAMT;
    cout << "Enter the amount spent on " << budgetTypes[3] << ":";
    cin >> BudgetTrack->transportationAMT;
    cout << "Enter the amount spent on " << budgetTypes[4] << ":";
    cin >> BudgetTrack->foodAMT;
    cout << "Enter the amount spent on " << budgetTypes[5] << ":";
    cin >> BudgetTrack->medicalAMT;
    cout << "Enter the amount spent on " << budgetTypes[6] << ":";
    cin >> BudgetTrack->insuranceAMT;
    cout << "Enter the amount spent on " << budgetTypes[7] << ":";
    cin >> BudgetTrack->entertainmentAMT;
    cout << "Enter the amount spent on " << budgetTypes[8] << ":";
    cin >> BudgetTrack->clothingAMT;
    cout << "Enter the amount spent on " << budgetTypes[9] << ":";
    cin >> BudgetTrack->miscAMT;
}

