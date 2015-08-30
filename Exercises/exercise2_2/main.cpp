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
    double sum_up, sum_down, s;
    int n;
    sum_up = 0;
    sum_down = 0;

    n = 1;
    while( n != (N+1)){
        //cout << s << endl;
        sum_up += 1.0/n++;
        //n++;
}
    n = N;
    while( n!= 0){
        sum_down +=1.0/n--;
        //n--;
    }

    cout << sum_up << endl;
    cout << sum_down << endl;
    return 0;
}

