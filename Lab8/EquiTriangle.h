#include "Triangle.h"

class EquiTriangle: public Triangle {
    private:   
        double length; //keeps track of the length of a side of the triangle
    
    public:
        EquiTriangle(double x, double y);
        //this constructor instanciates an equilateral triangle using two arguments: the x and y coordinates of a point in the plane
        
        double area();
        //this function overrides the one in the Triangle class and calculates the area of the equilateral triangle
    
        double perimeter();
        //this function overrides the one in the Triangle class and calculates the peremeter of the equilateral triangle
        
        double get_length();
        //this function retrns the length of a side of the Equilateral Triangle
};