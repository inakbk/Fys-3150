#include <iostream>
#include <string>

using namespace std;

int main()
{
    string Greetings("Hello std::string!");
    cout << Greetings << endl;

    cout << "Enter a line of text: " << endl;
    string Firstline;
    getline(cin, Firstline);

    cout << "Enter another: " << endl;
    string Secline;
    getline(cin, Secline);

    cout << "Result of concatenation: " << endl;
    strin Concat = Firstline + " " + Secline;
    cout << Concat << endl;

    cout << "Copy of concatenated string: " << endl;
    string Copy;
    Copy = Concat;
    cout = Copy << endl;

    cout << "Length of concat string: " << Concat.length() << endl;

    return 0;
}

