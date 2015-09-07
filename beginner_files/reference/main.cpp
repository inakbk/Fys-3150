#include <iostream>

using namespace std;

/*notice const to ensure that calling function cannot modify value sent
 * by reference, another variable for the result also by reference, but the
 * function can modify*/
void CalculateSquare(const int& Number, int& Result)
{
    Result = Number*Number;
}

int main()
{
    //playing with references:
    int Original = 30;
    cout << "Original = " << Original << endl;
    cout << "Original is at Adress:" << hex << &Original << endl;

    int& Ref = Original;
    cout << "Ref is at address: " << hex << &Ref << endl;

    int& Ref2 = Ref;
    cout << "Ref2 is at adress: " << hex << &Ref2 << endl;
    cout << "Ref2 gets value, Ref2 = " << dec << Ref2 << endl;

    //Changing original (to avoid declare const)
    Ref2 = 10;
    cout << Original << Ref << Ref2 << endl;

    //calling function by reference
    cout << "Enter a number you wish to sqare: ";
    int Number = 0; //not constant here, but inside the function it is
    cin >> Number;

    int Square = 0;
    CalculateSquare(Number, Square);
    cout << Number << "^2 = " << Square << endl;

    return 0;
}

