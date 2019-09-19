
class Triangle {
  private:   //3 points to mark verticies of triangle
    Point a;
    Point b;
    Point c;
  
  public:
    Triangle(Point& p1, Point& p2);
    //this constructor instanciates a triangle by taking two objects of the Point class as arguments, the third point is set to the origin
    
    Triangle(double x1, double y1, double x2, double y2);
    //this constructor instanciates a triangle by taking the x and y coordinates of two points in the plane as arguments, the third point is set to the origin
    
    double area();
    //this function calculates the area of the triangle using Heron's formula
    
    double perimeter();
    //this function calculates the peremeter of the triangle
};