#include <iostream>
#include <armadillo>

using namespace std;

using namespace arma;

int main()
{
    cout << "Hello World!" << endl;
    vec x = randu<vec>(5);
    cout << x << endl;
    return 0;
}

