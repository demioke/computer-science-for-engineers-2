#include "Can.h" //so we can use the Can classs (aswell as the Product class included within it)
#include <iostream>
using namespace std;

int main() {
    //declaring variables
    double radius, height, volumeOfProduct;
    
    Product product1; //initialising default product
    cout << "The volume of Product 1 is " << product1.getVolume() << endl; //printing volume of product 1
    
    //requesting user to input volume for product 1
    cout << "Please enter the volume of Product 2: ";
    cin >> volumeOfProduct;
    Product product2(volumeOfProduct); //initialising product 2 using provided volume
    
    //requesting user to input values for can parameters
    cout << "\nPlease enter the radius of the can: ";
    cin >> radius;
    cout << "Please enter the height of the can: ";
    cin >> height;
    Can can(radius, height); //initialising can using provided details
    can.printCanDetails(); //printing details of empty can
    
    cout << "\nAttempting to put Product 1 in can.\n";
    can.putIntoCan(product1); //putting product 1 into can
    can.printCanDetails(); //printing details of can
    
    cout << "\nAttempting to put Product 2 in can.\n";
    can.putIntoCan(product2); //putting product 1 into can
    can.printCanDetails(); //printing details of can
    
    return 0;
    
}