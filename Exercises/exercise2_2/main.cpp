#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
    if( argc<= 1 ){
        cout << "Bad Usage:" << argv[0] <<
                "\n Give one command-line argument! (N)" << endl;
        exit(1);
    }
    double N = atof(argv[1]);
    int n, sum_up, sum_down;
    sum_up = 0;
    sum_down = 0;

    n = 1;

    cout << "Hello World!" << endl;
    return 0;
}

