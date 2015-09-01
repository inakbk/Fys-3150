#include <iostream>
using namespace std;

enum KompassRetninger
{
    North = 5,
    South,
    East,
    West,
};

int main()
{
    cout << "Displaying directions and their symbolic values" << endl;
    cout << "N:" << North << endl;
    cout << "S:" << South << endl;
    cout << "E:" << East << endl;
    cout << "W:" << West << endl;

    KompassRetninger WindDir = South;
    cout << "Variable WindDir = " << WindDir << endl;

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
