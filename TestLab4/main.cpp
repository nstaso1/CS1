#include <iostream>

#include <fstream>

#include <string>

#include <iomanip>

using namespace std;

struct CarType {

    double price;

    string customer;

};

void GetCar(ifstream& in, CarType& cr);

//Above function reads a variable of CarType

//from input file and returns to calling block

//by reference.

void WriteCar(ofstream& out, const CarType& cr);

//Above function writes the variable of CarType

//to output file such that price data member

//is increased by 10%.

int main() {

    cout << fixed << showpoint << setprecision(2);

    CarType car;

    ifstream dataIn;

    ofstream dataOut;

    dataIn.open("cars.txt");

    dataOut.open("carsOut.txt");

    dataOut << fixed << showpoint << setprecision(2);

    while (dataIn.peek() != EOF) {

        GetCar(dataIn, car);

        car.price = car.price * 1.10;

        WriteCar(dataOut, car);

    }

    return 0;

}

void GetCar(ifstream& in, CarType& cr) {

    in >> cr.customer >> cr.price;

}

void WriteCar(ofstream& out, const CarType& cr) {

    out << "Customer:   " << cr.customer << endl

        << "Price: $:   " << cr.price << endl;

}
