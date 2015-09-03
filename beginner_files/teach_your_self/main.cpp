#include <iostream>
using namespace std;

int main()
{
    const int ArrayLength = 4;

    // Array of 5 integers, initialized to zero
    int MyNumbers [ArrayLength] = {0};

    cout << "Enter index number for element to be changed: ";
    int nElementIndex = 0;
    cin >> nElementIndex;
    //should check here that index < 4 to not overwrite outside the array

    cout << "Enter new value: ";
    cin >> MyNumbers [nElementIndex];

    cout << "first element:" << MyNumbers [0] << endl;
    cout << "second element:" << MyNumbers [1] << endl;
    cout << "third element:" << MyNumbers [2] << endl;
    cout << "fourth element:" << MyNumbers [3] << endl;

    return 0;
}









/*enum KompassRetninger
{
    North = 5,
    South,
    East,
    West,
};

enum YourCards {Ace=43, Jack, Queen, King};


int main()
{
    cout << "Displaying YourCards and their symbolic values" << endl;
    cout << Ace << endl;
    cout << Jack << endl;
    cout << Queen << endl;
    cout << King << endl;

    cout << "Calculating circumference of a circle, give the radius: " << endl;
    double Radius = 0.;
    cin >> Radius;
    cout << "Circumference with R=" << Radius << " is: " << Radius*2*22/7 << endl;


    return 0;
}

void MultiplyNumbers()
{
    cout << "Enter the first number: ";
    int FirstNumber = 0;
    cin >> FirstNumber;

    cout << "Enter the second number:";
    int SecondNumber = 0;
    cin >> SecondNumber;

    int MultiplicantResult = FirstNumber * SecondNumber;

    cout << FirstNumber << " x " << SecondNumber;
    cout << " = " << MultiplicantResult << endl;
}

int main()
{
    cout << "This program will help you multiply two numbers" << endl;
    MultiplyNumbers();

    return 0;
}
*/
