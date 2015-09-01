#include <iostream>
using namespace std;

enum KompassRetninger
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

/*void MultiplyNumbers()
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
