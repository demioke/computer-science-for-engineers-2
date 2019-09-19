#include "Distance.h" //so we can use the Distance class
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int mm, cm_added; //declaring variables to store distance in millimeters and centimeters obtained from user
    float subtracted_distance; //declaring variable to store the subtracted distance in metres
    
    //requesting distance1 in mm from user
    cout << "Enter Distance1 (mm): ";
    cin >> mm;
    Distance distance1(mm); //initialising distance1
    
    //requesting distance1 in mm from user
    cout << "Enter Distance2 (mm): ";
    cin >> mm;
    Distance distance2(mm); //initialising distance2
    
    //printing distances 
    cout << "\nDistance1 Values:\n";
    distance1.printDistance();
    cout << "\nDistance2 Values:\n";
    distance2.printDistance();
    
    Distance distance3(0); //initialising a distance object to store the addition of distance 1 & 2
    
    distance3 = distance1 + distance2; //adding distances
    cout << "\n(Distance1 + Distance 2) Values:\n";
    distance3.printDistance(); //printing distance3
    
    subtracted_distance = distance1 - distance2; //subtracting distances
    cout << "\nDistance1 - Distance2 in metres: " << subtracted_distance << endl; //printing subtracted distance
    
    //checking which distance is greater
    if(distance1 > distance2) {
        cout << "\nDistance1 is greater than Distance2\n";
    } else if(distance2 > distance1) {
        cout << "\nDistance2 is greater than Distance1\n";
    } else {
        cout << "\nDistance1 is equal to Distance2\n";
    }
    
    //requesting user to input distance to be added in cm
    cout << "\nEnter a distance to be added to Distance1 (cm): ";
    cin >> cm_added;
    
    distance1.addCentimeters(cm_added); //adding distance in c to distance1
    
    cout << "\nDistance1 Values:\n";
    distance1.printDistance(); //printing values of distance1 after adding cm
    
    return 0;
}