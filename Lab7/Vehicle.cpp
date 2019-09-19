#include "Vehicle.h"

#include <iostream>
using namespace std;

Vehicle::Vehicle(int vid) {
  vehicle_id = vid; //sets the vehicle ID
  v_registered = false; //a vehicle is unregistered when first instaciated
}

void Vehicle::register_vehicle() {
  v_registered = true; //sets the registration status of vehicle to true
}

void Vehicle::print_details() {
  cout << "This is vehicle number " << vehicle_id << "\n"; //printing Vehicle ID
}

int Vehicle::get_vehicle_id() {
  return vehicle_id; //returns vehicle ID
}

bool Vehicle::get_v_registered() {
  return v_registered; //returns registration status
}