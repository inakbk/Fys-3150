#ifndef HUMAN
#define HUMAN

using namespace std;

class Human
{
private:
    string Name;
    int Age;

public:
    // constructor
    Human(string HumansName = "Harry", int HumansAge = 0)
    {
        Name = HumansName;
        Age = HumansAge;
        cout << "Overloaded constructor creates " << Name;
        cout << " of age " << Age << endl;
        //Age = 0; // initializing to enshure no junk value
        //cout << "constructed an instance of class Human" << endl;
    }

    void SetName(string HumansName)
    {
        Name = HumansName;
    }

    void SetAge(int HumansAge)
    {
        Age = HumansAge;
    }

    void IntroduceSelf()
    {
        cout << "I am " + Name << " and am ";
        cout << Age << " years old." << endl;
    }
};




#endif // HUMAN

