#include <iostream>
using namespace std;

int main()
{
    const int ArrayLength = 3;

    // Array of 5 integers, initialized to zero
    int MyNumbers [ArrayLength][ArrayLength-1] = \
    {{10, 8}, {0, 2}, {12, 9}};

    cout << "Enter index number for element to be changed (m, n): ";
    int mElementIndex, nElementIndex = {0};
    cin >> mElementIndex >> nElementIndex;
    cout << "user input 2: " << nElementIndex << endl;

    //should check here that index < 3 to not overwrite outside the array
    if((mElementIndex < ArrayLength) && (nElementIndex < (ArrayLength-1)))
    {
        cout << "Enter new value: ";
        cin >> MyNumbers [mElementIndex][nElementIndex];
    }
    else
    {
        cout << "Bad usage, index out of bounds!!" <<  endl;
        exit(1);
    }


    cout << "Row 0: " << MyNumbers [0][0] << "  "\
                     << MyNumbers [0][1] << endl;
    cout << "Row 1: " << MyNumbers [1][0] << "  "\
                     << MyNumbers [1][1] << endl;
    cout << "Row 2: " << MyNumbers [2][0] << "  "\
                     << MyNumbers [2][1] << endl;

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
