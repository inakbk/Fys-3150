#ifndef VEC_H
#define VEC_H
#include <vector>

using std::vector;

class vec
{
public:
    vec(int dim);

    int dimention(){ return components.size();}
    vector<double> components;

};

#endif // VEC_H
