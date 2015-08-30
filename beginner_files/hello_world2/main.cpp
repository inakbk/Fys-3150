//Second way of writing "Hello World"
/*
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
*/

//Hello world with exeption handling

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main (int argc, char* argv[])
{
    //Read in output, abort if there are too few command-line arguments
    if( argc<=1 ){
        cout << "Bad usage: " << argv[0] <<
                "\n Read also a number on the same line, e.g., prog.exe 0.2" << endl;
        exit(1); //here the program stops.
    }
    //convert the text argv[1] to double using atof:
    double r = atof(argv[1]);
    double s = sin(r);
    cout << "Hello world! sin(" << r << ")=" << s << endl;
    //sucsess
    return 0;
}




