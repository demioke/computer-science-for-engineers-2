#include "Point.h"
#include "Line.h"
#include "EquiTriangle.h" //so we can use the EquiTriangle and Triangle  classes as they are all included in EquiTriangle.h
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    double x1, y1, x2, y2, area1, area2, area3, x3;
    
    cout << "Please enter the x-coordinate of the first point\n";
    cin >> x1;
    
    cout << "Please enter the y-coordinate of the first point\n";
    cin >> y1;
    
    cout << "Please enter the x-coordinate of the second point\n";
    cin >> x2;
    
    cout << "Please enter the y-coordinate of the second point\n";
    cin >> y2;
    
    Triangle t1(x1, y1, x2, y2); //instanciating Triangle 
    
    //file handling
    ifstream i_file; 
    i_file.open("comp20080-2018-Asst8-data.txt");
    if ( !i_file ) {
        cout << "The file failed to open.\n";
        return -1; 
    }
    
     i_file >> x1; //read 1st line from file
     i_file >> y1; //read 2nd line from file
     i_file >> x2; //read 3rd line from file
     i_file >> y2; //read 4th line from file
     
     Point a(x1, y1), b(x2, y2);
     
     Triangle t2(a, b); //instanciating Triangle 2 using other constructor
     
     //getting areas of triangles
     area1 = t1.area(); 
     area2 = t2.area();
     
     if(area1 == 0) {
         cout << "\nThe triangle t1 is trivial.\n";
     } else { //triangle is not trivial
         cout << "\nThe area of triangle t1 is: " << area1 << endl;
         cout << "Perimieter of triangle t1 is: " << t1.perimeter() << endl;
     }
     
     if(area2 == 0) {
         cout << "\nThe triangle t2 is trivial.\n";
     } else {//triangle is not trivial
         cout << "\nThe area of triangle t2 is: " << area2 << endl;
         cout << "Perimieter of triangle t2 is: " << t2.perimeter() << endl;
     }
     
    cout << "\nPlease enter the x-coordinate of a vertex of the Equilateral Triangle: ";
    cin >> x3;
    
    EquiTriangle et(x3, 0); //instanciateing Equilateral triangle where y-coordinate of vertex is 0
    area3 = et.area();
    
    if(area3 == 0) {
         cout << "\nThe Equilateral Triangle t1 is trivial.\n";
     } else {//triangle is not trivial
        cout << "\nLength of Eqilateral Triangle: " << et.get_length() << endl;
        cout << "Area of Eqilateral Triangle: " << area3 << endl;
        cout << "Perimieter of Eqilateral Triangle: " << et.perimeter() << endl;
     }
    
    i_file.close(); //closing file
    
    return 0;
}