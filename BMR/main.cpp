// BMRProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    double wt;
    double ht;
    int ag;
    double af;
    double BMR;
    double cals;

    cout << "To advance your health we will calculate as to how much calories did you burn today." << "\n";
    cout << "We will need data on your weight, height, and age and what kind of activity you do." << "\n";
    cout << "All your information will be kept confidential and no salesman will call." << "\n";
    cout << "Please enter your weight in pounds[xx.xx] and then press enter key:" << "\n";
    cin >> wt;
    cout << "Please enter your height in feet[xx.xx] and then press enter key:";
    cin >> ht;
    cout << "Please enter your age in years [xx] and press enter key:";
    cin >> ag;
    cout << "If you have a desk job and do no exercises then enter 1.2." << "\n";
    cout << "If you do light exercise 1 to 3 days a week then enter 1.375." << "\n";
    cout << "If you do moderate exercises 3 to 5 times a week enter 1.55." << "\n";
    cout << "If you do hard exercises 6 to 7 days a week, enter 1.725." << "\n";
    cout << "If you train hard in sports twice a day enter 1.9." << "\n";
    cout << "These are the activity numbers for your life style. Please enter just one of them:" << "\n";
    cin >> af;

    BMR = 66 + 6.2 * wt + 152.4 * ht - 6.8 * ag;
    cals = BMR * af;
    cout << "Calories Burned = " << cals << "\n";
    
    cout << "If your calorie intake per day is more than that then you may wish to include more exercises in your daily life." << "\n";
    cout << "Alternatively you may wish to cut down on your calorie intake as well." << "\n";
    cout << "Here are the calories in some of the popular foods:" << "\n";
    cout << "One Doughnut has about 250 to 300 calories." << "\n";
    cout << "One butter croissant has about 272 calories." << "\n";
    cout << "One piece of cheesecake has about 260 calories." << "\n";
    cout << "One Danish pastry has about 353 calories." << "\n";
    cout << "One bagel has about 156 calories." << "\n";
    cout << "Thanks for using El Camino College calorie calculation program";
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
