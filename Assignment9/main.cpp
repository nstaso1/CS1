#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
//Customer Struct
struct CustomerAccount
{
    string customerName;
    string customerAddress;
    string customerCity;
    string customerState;
    int cityZip;
    double phoneNum;
    double accountBalance;
    string lastPayDate;
};
CustomerAccount searchDetails(CustomerAccount&);
int getCustomer(CustomerAccount[], int, string);
void detailDisplay(CustomerAccount[], int);

//Main
int main()
{
    //Size 
    const int SIZE = 20;
    //Array
    CustomerAccount customers[SIZE];
    CustomerAccount customer;
    // Local Variables
    int customerChoice;
    int count = 0;
    int countCustomer = 0;
    string fullName;
    int change;
    do
    {
        //Print menu
        cout << endl;
        cout << "1. Enter new account information " << endl;
        cout << "2. Change account information " << endl;
        cout << "3. Display all account information " << endl;
        cout << "4. Exit the program " << endl;
        cout << "Enter either 1, 2, 3 or 4: ";
        cin >> customerChoice;

        // Customer Choice
        switch (customerChoice)
        {
        case 1:
            customers[count] = searchDetails(customer);
            cout << "You have entered the customer number "
                << count << endl;
            count++;
            countCustomer = count;
            break;
        case 2:
            // Customer #
            cout << "What is the customer number?: ";
            cin >> count;
            //Customer details
            cout << "Customer name: "
                << customers[count].customerName << endl;
            cout << "Customer address: "
                << customers[count].customerAddress << endl;
            cout << "City: " << customers[count].customerCity
                << endl;
            cout << "State: " << customers[count].customerState
                << endl;
            cout << "ZIP-code: " << setprecision(10)
                << customers[count].cityZip << endl;
            cout << "Telephone: " << setprecision(15)
                << customers[count].phoneNum << endl;
            cout << "Account Balance: $" << setprecision(15)
                << customers[count].accountBalance << endl;
            cout << "Date of Last Payment: "
                << customers[count].lastPayDate << endl;
            cout << endl << "Enter the Customer's Full Name: ";
            cin >> fullName;
            change = getCustomer(customers, count, fullName);

            // If name invalid
            if (change == -1)
            {
                cout << endl << "Invalid Customer Name" << endl;
            }
            else
            {
                customers[change] = searchDetails(customer);
            }
            break;
            //Display

        case 3:
            detailDisplay(customers, countCustomer);
            break;
            // Case exit
        case 4:
            exit(0);
        default:
            cout << "Print 1, 2, 3 or 4" << endl;
        }
    } while (customerChoice != 4 && count < SIZE);
    return 0;
}

CustomerAccount searchDetails(CustomerAccount& obj)
{
    cout << endl;
    cout << "Enter the name of the customer: ";
    cin >> obj.customerName;
    cout << "Enter the address: ";
    cin >> obj.customerAddress;
    cout << "Enter the city: ";
    cin >> obj.customerCity;
    cout << "Enter the state: ";
    cin >> obj.customerState;
    cout << "Enter the ZIP code: ";
    cin >> obj.cityZip;
    cout << "Enter the telephone number: ";
    cin >> obj.phoneNum;
    cout << "Enter the account balance: $";
    cin >> obj.accountBalance;

    // If invalid balance
    while (obj.accountBalance < 0)
    {
        cout << "Enter the positive account balance: $";
        cin >> obj.accountBalance;
    }
    cout << "Enter the Date of the Last Payment (dd/mm/yyyy): ";
    cin >> obj.lastPayDate;
    return obj;
}

// Return customer #
int getCustomer(CustomerAccount cust[], int size, string name)
{
    int customer_number = -1;
    for (int i = 0; i <= size; i++)
    {
        if (cust[i].customerName == name)
        {
            customer_number = i;
            break;
        }
    }
    return customer_number;
}

//Display customer list
void detailDisplay(CustomerAccount customers[], int size)
{
    if (size == 0)
    {
        cout << endl << "There are no customers on the list" << endl;
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            cout << endl;
            cout << "Customer Name: "
                << customers[i].customerName << endl;
            cout << "Customer Address: "
                << customers[i].customerAddress << endl;
            cout << "City: " << customers[i].customerCity << endl;
            cout << "State: " << customers[i].customerState << endl;
            cout << "ZIP-code: " << setprecision(10)
                << customers[i].cityZip << endl;
            cout << "Telephone: " << setprecision(15)
                << customers[i].phoneNum << endl;
            cout << "Account Balance: $" << setprecision(15)
                << customers[i].accountBalance << endl;
            cout << "Date of Last Payment: "
                << customers[i].lastPayDate << endl;
        }
    }
}
