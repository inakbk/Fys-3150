#include <iostream>
#include <armadillo>
#include <cstdlib>


using namespace std;

using namespace arma;

int main()
{
    //cout << "Hello World!" << endl;
    vec x = randu<vec>(5);
    string a = "a";
    string b = to_string(8);
    string c =to_string(10)+a;


    cout << c << endl;
/*
    ofstream myfile;
        myfile.open ("arm_solve_10000.txt");
        myfile << "x_mat" << "     " << "x2" << endl;
        for (int i=0; i<5; i++){
            myfile << x(i) << "    " << "test" << endl;
        }
        myfile.close();
*/
    return 0;
}

