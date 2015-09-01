#include <iostream>
using namespace std;

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

