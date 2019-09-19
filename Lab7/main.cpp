#include "ElectricTruck.h" //so we can use the Electric Truck, Truck and Vehicle classes as they are all included in ElectricTruck.h
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int truck_id; //stores the truck ID's
    int axles; //stores the number of axels in truck
    int range; //stores range of truck
    int range_sum; //stores the sum of 2 electric trucks as described in the assignment
    
    //file handling
    ifstream i_file; 
    i_file.open("comp20080-2018-Asst7-data.txt");
    if ( !i_file ) {
        cout << "The file failed to open.\n";
        return -1; 
    }
    
    cout << "Reading from the file........\n";
    
    i_file >> truck_id; //read 1st from file
    Truck truck(truck_id); //creating an instance of a truck 
    cout << "\nTruck Details\n";
    cout << "----------------------------\n";
    truck.print_details(); //printing truck details
    
    i_file >> truck_id; //read 2nd line from file
    ElectricTruck e_truck1(truck_id); //creating an instance of an electric truck
    cout << "\nElectric Truck 1 Details\n";
    cout << "----------------------------\n";
    e_truck1.print_details(); //printing electric truck details
    
    i_file >> truck_id; //read 3rd line from file
    ElectricTruck e_truck2(truck_id); //creating an instance of an electric truck
    cout << "\n Electric Truck 2 Details\n";
    cout << "----------------------------\n";
    e_truck2.print_details(); //printing electric truck details
    
    
    //registering trucks
    truck.register_vehicle();
    e_truck1.register_vehicle();
    e_truck2.register_vehicle();
    
    
    i_file >> axles; //read 4th line from file
    truck.set_num_of_axels(axles); //setting num of axles of truck
    
    i_file >> axles; //read 5th line from file
    e_truck1.set_num_of_axels(axles); //setting num of axles of electric truck 1
    
    i_file >> axles; //read 6th line from file
    e_truck2.set_num_of_axels(axles); //setting num of axles of electric truck 2
    
    
    i_file >> range; //read 7th line from file
    e_truck1.set_range(range); //setting range of electric truck 1
    
    i_file >> range; //read 8th line from file
    e_truck2.set_range(range); //setting range of electric truck 2
    
    
    cout << "\nTruck Details\n";
    cout << "----------------------------\n";
    truck.print_details(); //printing truck details
    
    cout << "\nElectric Truck 1 Details\n";
    cout << "----------------------------\n";
    e_truck1.print_details(); //printing electric truck details
    
    cout << "\n Electric Truck 2 Details\n";
    cout << "----------------------------\n";
    e_truck2.print_details(); //printing electric truck details
    
    
    range_sum = e_truck1 + e_truck2; //adding 2 electric trucks as described in assignment
    cout << "\nThe sum of the 2 electric trucks is: " << range_sum << endl;
    
    
    // close the opened file.
    i_file.close();
    
    return 0;
}

//g++ -o main.exe main.cpp Vehicle.cpp Truck.cpp ElectricTruck.cpp