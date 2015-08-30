//First program in C++


#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
// convert the text argv[1] to double using atof:
    double r = atof(argv[1]);
    double s = sin(r);
    cout << "Hello Worlds! sin(" << r << ")=" << s << endl;
    return 0;
}

