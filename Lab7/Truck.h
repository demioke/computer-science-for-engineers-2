#include "Vehicle.h"

class Truck : public Vehicle {
    private:
        int num_of_axles; //new data field to keep track of the number of axles 
        
    public:
        Truck(int truck_id);
        //this constructor instanciates a truck using the provided truck ID and sets the default num_of_axles to 2
        
        void set_num_of_axels(int axles);
        //this function sets the number of axles on a truck object 
        
        int get_num_of_axles();
        //this function retrns the number of axles on a truck object
        
        void print_details();
        //this function overides the one in the vehicle class and displays the truck ID, the number of axles in truck
        //and the regisration status of the truck
};