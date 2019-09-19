#include "Distance.h"
#include <iostream>
using namespace std;

Distance::Distance(int numOfMillimeters) {
    //converting distance given in millimetres to distance in canonical form
    millimetres = numOfMillimeters % 10;
    centimetres = (numOfMillimeters/10)%100;
    metres = numOfMillimeters/1000;
}

Distance Distance::operator+(Distance d) {
    int distance1_mm = millimetres + centimetres*10 + metres*1000; //finding distance of distance1 in mm
    int distance2_mm = d.millimetres + d.centimetres*10 + d.metres*1000; //finding distance of distance2 in mm
    int total_mm = distance1_mm + distance2_mm; //adding distances to give total
    Distance added_d(total_mm); //instanciating Distance object with total distance in mm
    return added_d;
}

float Distance::operator-(Distance d) {
    int distance1_mm = millimetres + centimetres*10 + metres*1000; //finding distance of distance1 in mm
    int distance2_mm = d.millimetres + d.centimetres*10 + d.metres*1000; //finding distance of distance2 in mm
    int total_mm = distance1_mm - distance2_mm; //subtracting distances to give total
    float distance_metres = (float)total_mm / 1000; //calculating total distance in meters (as a float)
    return distance_metres;
}

bool Distance::operator>(Distance d) {
    int distance1_mm = millimetres + centimetres*10 + metres*1000; //finding distance of distance1 in mm
    int distance2_mm = d.millimetres + d.centimetres*10 + d.metres*1000; //finding distance of distance2 in mm
    
    if(distance1_mm > distance2_mm) {
        return 1; //distance represented by the first Distance object is greater than the distance represented by the second Distance object
    }
    
    return 0; //above statement iss false.
}

void Distance::addCentimeters(int numOfCentimeters) {
    int total_cm = centimetres + numOfCentimeters + metres*100; //total centimeters
    centimetres = total_cm%100; //setting centimeters to its canonical form
    metres = total_cm/100; //setting meters to its canonical form
}

void Distance::printDistance(){
    cout << "------------------------\n";
    cout << "Metres: " << metres << endl;
    cout << "Centimetres: " << centimetres << endl;
    cout << "Millimeters: " << millimetres << endl;
}