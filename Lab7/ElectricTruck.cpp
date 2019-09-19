#include "ElectricTruck.h"

#include <iostream>
using namespace std;

ElectricTruck::ElectricTruck(int e_truck_id)
             : Truck(e_truck_id) { //calling Truck class constructor
                 range = 0; //setting default range
             }
             
void ElectricTruck::set_range(int r) {
    range = r; //setting range
}

int ElectricTruck::operator+(ElectricTruck e_truck) {
    return (range + e_truck.range); //retrns the sum of the ranges of the electric trucks
}

void ElectricTruck::print_details() { //overriding this method from vehicle class
    //printing ELEECTRICTRUCK details
    cout << "Electric Truck ID: " << get_vehicle_id() << endl;
    cout << "Number of Axles: " << get_num_of_axles() << endl;
    cout << "Range: " << range << endl;
    if(get_v_registered()) {
        cout << "This car has been registered\n";
    } else {
        cout << "This car has not been registered\n";
    }
}