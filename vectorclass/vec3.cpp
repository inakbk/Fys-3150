#include "vec3.h"
#include <iostream> //compiler copies headerfile to source code and reads it, so need to include
#include <cmath> //for sqrt (always use the files with "c" in front, the newest code for c++

using std::cout;using std::endl;

vec3::vec3()
{
    components[0] = 0;
    components[1] = 0;
    components[2] = 0;
}

vec3::vec3(double x, double y, double z)
{
    components[0] = x;
    components[1] = y;
    components[2] = z;
}

void vec3::print()
{
    cout << "[" << components[0] << ", " << components[1] << "," << components[2] << "]" << endl;
}

double vec3::lengthSquared()
{
    return components[0]*components[0] + components[1]*components[1] + components[2]*components[2];

}

double vec3::length()
{
    return sqrt(lengthSquared());
}



double vec3::x()
{
    return components[0];
}

double vec3::y()
{
    return components[1];
}

double vec3::z()
{
    return components[2];
}

vec3 vec3::operator+(vec3 rhs)
{
    double x = components[0] + rhs[0];
    double y = components[1] + rhs[1];
    double z = components[2] + rhs[2];

    return vec3(x,y,z);
}

vec3 vec3::operator+(double rhs)
{
    return vec3(x()+rhs, y()+rhs, z()+rhs);
}




