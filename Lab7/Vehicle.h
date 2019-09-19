class Vehicle
{
  private:
    int vehicle_id;
    bool v_registered;

  public:
    Vehicle(int vid); 
    //this constructor instanciates a vehicle using the provided vehicle ID 
    
    void register_vehicle();
    //this function registers a vehicle by setting its registration status to true
    
    void print_details(); 
    //this function prints out the details of the vehicle. note that this function will need to be overridden by the derived classes
    
    int get_vehicle_id();
    //this function returns the vehicle ID
    
    bool get_v_registered();
    //this function returns the registration status of the vehicle
};