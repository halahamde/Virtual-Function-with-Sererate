#ifndef CYLINDER_H
#define CYLINDER_H
#include <iostream>
#include "_3dShapes.h"


using namespace std;


class Cylinder : public _3dShapes
{
    public:
        Cylinder();
        Cylinder ( int r , int h , string c  )  ;
        double calcArea() ;
        double calcVolume () ;
    private:
        int height ;
};

#endif // CYLINDER_H
