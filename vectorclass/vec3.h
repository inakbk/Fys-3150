#ifndef VEC3_H
#define VEC3_H


class vec3
{
public:
    double components[3];

    vec3();
    vec3(double x, double y, double z);

    void print();
    double lengthSquared();
    double length();

    double x();
    double y();
    double z();

    double operator[](int index){return components[index];};
    vec3 operator+(vec3 rhs);
    vec3 operator+(double rhs);
};



#endif // VEC3_H
