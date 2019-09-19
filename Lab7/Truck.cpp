#include "Truck.h"

#include <iostream>
using namespace std;

Truck::Truck(int truck_id)
     : Vehicle(truck_id) { //calling base class constructor
         num_of_axles = 2; //setting the default num_of_axles
     } 

void Truck::set_num_of_axels(int axles) {
    num_of_axles = axles; //setting the num_of_axles
}

int Truck::get_num_of_axles() {
    return num_of_axles; //returns num_of_axles
}

void Truck::print_details() { //overriding this method from vehicle class
    //printing TRUCK details
    cout << "Truck ID: " << get_vehicle_id() << endl;
    cout << "Number of Axles: " << num_of_axles << endl;
    if(get_v_registered()) {
        cout << "This car has been registered\n";
    } else {
        cout << "This car has not been registered\n";
    }
}