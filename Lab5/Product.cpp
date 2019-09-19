#include "Product.h" //allows us to use the definition of a Product
#include <iostream>
using namespace std;

Product::Product(double v) {
    //assigns the volume of the product based on input from the user
    volume = v;
}

Product::Product() {
    //assigns the default volume of the product
    volume = 7.75;
}

double Product::getVolume() {
    //returns the volume of the product
    return volume;
}