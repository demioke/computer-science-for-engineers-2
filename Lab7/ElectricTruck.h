#include "Truck.h"

class ElectricTruck : public Truck {
    private:
        int range; //new data field to keep track of the range of an electric truck 
        
    public:
        ElectricTruck(int e_truck_id);
        //this constructor instanciates an electric truck using the provided truck ID and sets the default range to 0
        
        void set_range(int r);
        //this function sets the range of an electric truck
        
        int operator+(ElectricTruck e_truck);
        //this function overloads the addition operator for the Electric Truck class, so that addition applies only to the range
        
        void print_details();
        //this function overides the one in the truck class and displays the electric truck ID, the range, the number of axles in 
        //the electric truck and the regisration status of the truck
};