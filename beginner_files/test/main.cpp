#include <iostream>

using namespace std;

int main()
{
    int Number = 3;
    int* pNum1 = &Number; //points to adress of number
    *pNum1 = 20; //value of address that pNum1 points to is now 20-->Number=20

    int* pNum2 = pNum1; // points to same location as pNum1
    Number *= 2; // Number = 20*2 = 40

    cout << *pNum2 << endl; // displays value of address which is Number = 40
    return 0;
}

