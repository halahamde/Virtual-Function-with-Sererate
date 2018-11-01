// Course:  CS213 - Programming II  - 2018
// Title:   Assignment II -Task2
// Purpose: Virtual function to calculate the area and volume for different shapes
// Author:  Eng: Hala Hamdy
// Date:    1 Novamber 2018
// Version: 1.0

#include <iostream>
#include "Shape.h"
#include "_2dShapes.h"
#include "Circle.h"
#include "Square.h"
#include "Sphere.h"
#include "Cylinder.h"
#include "_3dShapes.h"

using namespace std;

int main()
{
    int num, x, y ;
    string z ;
    cout << "What do you want: " << endl ;
    cout << "1-Calculate the area of the circle" << endl ;
    cout << "2-Calculate the area of the square" << endl ;
    cout << "3-Calculate the SurfaceArea of the Sphere" << endl ;
    cout << "4-Calculate the volume of the Sphere" << endl ;
    cout << "5-Calculate the SurfaceArea of the cylinder" << endl ;
    cout << "6-Calculate the volume of the cylinder" << endl ;
    cout << "Enter number: " ;
    cin >> num ;

    if ( num == 1 )
    {
        cout << "Enter the radius: " ;
        cin >> x ;
        cout << "Enter the color: " ;
        cin >> z ;
        Circle c ( x, z ) ;
        cout <<"The area is: " <<c.calcArea() ;
    }
    if ( num == 2 )
    {
        cout << "Enter the length: " ;
        cin >> x ;
        cout << "Enter the color: " ;
        cin >> z ;
        Square c ( x, z ) ;
        cout <<"The area is: " <<c.calcArea() ;
    }
      if ( num == 3 )
    {
        cout << "Enter the radius: " ;
        cin >> x ;
        cout << "Enter the color: " ;
        cin >> z ;
        Sphere a ( x , z ) ;
        cout <<"The SurfaceArea is: " << a.calcArea() ;
    }

    if ( num == 4 )
    {
        cout << "Enter the radius: " ;
        cin >> x ;
        cout << "Enter the color: " ;
        cin >> z ;
        Sphere c ( x , z ) ;
        cout <<"The volume is: " <<c.calcVolume() ;

    }
    if ( num == 5 )
    {
        cout << "Enter the radius: " ;
        cin >> x ;
        cout << "Enter the height: " ;
        cin >> y ;
        cout << "Enter the color: " ;
        cin >> z ;
        Cylinder a ( x, y, z ) ;
        cout <<"The SurfaceArea is: " << a.calcArea() ;
    }
    if ( num == 6 )
    {
        cout << "Enter the radius: " ;
        cin >> x ;
        cout << "Enter the height: " ;
        cin >> y ;
        cout << "Enter the color: " ;
        cin >> z ;
        Cylinder b ( x, y, z ) ;
        cout <<"The volume is: " << b.calcVolume() ;
    }

    return 0;
}
