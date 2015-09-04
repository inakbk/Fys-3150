#include <iostream>

using namespace std;

int main()
{
    const int ArrayLength = 5;
    int MyInts[ArrayLength] = {0};

    cout << "Populate array of " << ArrayLength << " integers" << endl;

    for (int ArrayIndex = 0; ArrayIndex < ArrayLength; ++ArrayIndex)
    {
        cout << "Enter an integer for element " << ArrayIndex << ": ";
        cin >> MyInts[ArrayIndex];
    }

    cout << "Displaying contents of the array: " << endl;

    for (int ArrayIndex = 0; ArrayIndex < ArrayLength; ++ArrayIndex)
    {
        cout << "Element " << ArrayIndex << " = " << MyInts[ArrayIndex] << endl;
    }

    return 0;
}

