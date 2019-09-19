#include "Point.h"
#include "Line.h"
#include "EquiTriangle.h"
const double SQRT3 = 1.732;

EquiTriangle::EquiTriangle(double x, double y) 
            :Triangle(x, y, x/2, (SQRT3/2)*x) { //assuming y is always 0......this is the third point
                length = x; //assuming y is always 0......
            } 

double EquiTriangle::area(){
    return length*length*SQRT3/4; //area of equilateral triangle
}

double EquiTriangle::perimeter() {
    return 3*length; //perimeter of equilateral triangle
}

double EquiTriangle::get_length() {
    return length; //length of equilateral triangle
}
