#include <iostream>
#include <string>
#include <human.h>

using namespace std;

int main()
{
    Human FirstMan;
    FirstMan.SetAge(30);
    FirstMan.SetName("Adam");

    Human FirstWoman("Eva", 12);
    //FirstWoman.SetName("Eva");
    //FirstWoman.SetAge(12);

    FirstWoman.IntroduceSelf();
    FirstMan.IntroduceSelf();
    return 0;
}

