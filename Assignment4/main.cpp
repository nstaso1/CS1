#include <iostream>

using namespace std;

void print(int& X);

int main()

{

    int Nums[5] = { 0, 1, 2, 3, 4 };

    for (int index = 0; index < 5; index++)

    {

        print(Nums[index]);

    }

    cout << endl;

    for (int index = 0; index < 5; index++)

    {

        cout << Nums[index] << "    ";

    }

    cout << endl;

    return 0;

}

void print(int& X)

{

    cout << X << "      ";

    X = X + 1;

}
