// Imports
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

// Main Class
using namespace std;
int main()
{

	//Intro
	cout << "Welcome to El Camino College Engineering Lab." << endl;
	cout << "We will calculate average carbon footprint and corresponding fine." << endl;
	cout << "Please be ready to provide the data file name for carbon FP for US cities." << endl;

	//This is where the output goes
	string outfilename;
	cout << "Please enter full path to output file: ";
	getline(cin, outfilename);
	ofstream out("(output file)");

	// Introduction
	if (out.is_open())
	{
		out << "Welcome to El Camino College Engineering Lab." << endl;
		out << "We will calculate average carbon footprint and corresponding fine." << endl;
		string infilename;

		//Entering an input file
		cout << "Enter opening input file. File either does not exist or has no read permission. ";
		getline(cin, infilename);

		//input file path
		ifstream in("(file path)");
		if (in.is_open())
		{
			cout << fixed << showpoint << setprecision(2);
			out << fixed << showpoint << setprecision(2);
			int numOfCities = 0;
			double fineCalc = 0;

			// Creation of the table
			cout << "************************************************************************************************" << endl;
			out << "************************************************************************************************" << endl;
			cout << setw(30) << left << "City" << setw(30) << left << "Rounded Average Carbon FP" << setw(30) << left << "Fine($)" << endl;
			out << setw(30) << left << "City" << setw(30) << left << "Rounded Average Carbon FP" << setw(30) << left << "Fine($)" << endl;
			cout << "************************************************************************************************" << endl;
			out << "************************************************************************************************" << endl;

			while (in.peek() != EOF)
			{
				// Creation of variables
				numOfCities++;
				int eachFP;
				int count = 0;
				int total = 0;
				string eachCity;
				double eachFine = 0;
				in >> eachCity;
				in >> eachFP;

				while (eachFP >= 0)
				{
					total += eachFP;
					count++;
					in >> eachFP;
				}

				if (count > 0) {

					double previousAVG = static_cast<double>(total) / count;
					int avgFP = static_cast<int>(previousAVG + .5);

					// This is for calculating fines. The values are given in the instructions.
					if (avgFP <= 1)
					{
						eachFine = 0.00;
					}
					else if (avgFP <= 3)
					{
						eachFine = 1000000.00;
					}
					else if (avgFP <= 5)
					{
						eachFine = 2000000.00;
					}
					else if (avgFP <= 7)
					{
						eachFine = 3000000.00;
					}
					else
					{
						eachFine = 4500000.00;
					}

					// This outputs it onto the table
					cout << setw(30) << left << eachCity << setw(30) << left << avgFP << setw(30) << left << eachFine << endl;
					out << setw(30) << left << eachCity << setw(30) << left << avgFP << setw(30) << left << eachFine << endl;

					// This is if there isn't a value given from the FP
				}
				else
				{
					cout << setw(30) << left << eachCity << setw(50) << left << "No value available. Fine was not calculated." << endl;
					out << setw(30) << left << eachCity << setw(50) << left << "No value available. Fine was not calculated." << endl;
				}
				fineCalc += eachFine;
			}

			//More table creation
			cout << "************************************************************************************************" << endl;
			out << "************************************************************************************************" << endl;

			//The amount of cities total from the input file
			cout << "Total number of cities in the file = " << numOfCities << endl;
			out << "Total number of cities in the file = " << numOfCities << endl;

			//The Fine output created from the numbers in the input file
			cout << "Total fine collected: $" << fineCalc << endl;
			out << "Total fine collected: $" << fineCalc << endl;
			cout << "Thank you for using El Camino College Engineering Lab." << endl;
		}
		else
		{
			cout << "Failed to open the input file." << endl;
		}
		in.close();
	}
	else
	{
		cout << "Failed to open the file." << endl;
	}
	out.close();
	return 0;
}

