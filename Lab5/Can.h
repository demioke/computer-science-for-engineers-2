#include "Product.h" //include the Product.h file as we are using the Product class in the argument of a function below.
                     //therefore we only need to include the Can.h file in the main as it now includes the Product.h file 

const double PI = 3.1415;
class Can {
    private:
        double radius;
        double height;
        double contents; //keeps track of the occupied volume of the can
        
    public:
        Can(double r, double h);
        //this constructor instanciates a can given the values of radius and height
        
        double volume();
        //this function calculates and returns the volume the can (i.e. the volume of a cylinder) 
        
        int gramsInCan(double volOneGram);
        //this function returns the the number of grams the can can contain given the volume per gram density of the can
        
        void putIntoCan(Product product);
        //this function attempts to put a product into a can only if there is enough available space to fit the product
        //if not returns a message to the user notifying them of this
        
        void printCanDetails();
        //this function prints out the following details of the can: radius, height, volume & contents
};