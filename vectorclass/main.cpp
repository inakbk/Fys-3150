#include <iostream>
#include <vec.h>
#include "vec3.h"

using namespace std;

int main()
{
//    vec myVevtor(3);
//    myVevtor[0] = 3;
//    vec myVector;
//    myVector.dimention = 8;
//    cout << "Dimention: " << myVector.dimention << endl;


    vec3 myVector(1,2,3);
//    myVector.print();
//    cout << myVector.length() << endl;

    myVector[0];
    myVector.x();

    vec3 a(1,2,3);
    vec3 b(2,3,4);
    vec3 c = a+b;
    c.print();
    cout << (a+b).length() << endl;
    c = a+2;
    c.print();


    cout << "Hello World!" << endl;
    return 0;
}

