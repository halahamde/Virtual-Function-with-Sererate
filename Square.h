#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>
#include "_2dShapes.h"

using namespace std;


class Square  : public _2dShapes
{
    public:
        Square();
        Square ( int r , string c ) ;
        double calcArea ();
        double calcVolume () ;

    private:
        int length ;
};

#endif // SQUARE_H
