//Second way of writing "Hello World"
#include <iostream>
#include <cstdlib>
#include <cmath>


int main(int argc, char*argv[])
{
//convert the text argv[1] to double using atof
    double r = atof(argv[1]);
    double s = sin(r);
    std::cout << "Hello, World! sin(" << r << ")=" << s << std::endl;
    return 0;
}

