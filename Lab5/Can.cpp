#include "Can.h" //allows us to use the definition of a can and product by extension
// #include "Product.h"
#include <iostream>
using namespace std;

Can::Can(double r, double h) {
    //assigning values to radius, height and contents
    radius = r;
    height = h;
    contents = 0; //can is initially empty
}

double Can::volume() {
    return PI*radius*radius*height; //calculating and returning the volume of the can
}

//the following function was not required by the assignment so it was not used in the main. However it was included in the Can class detailed in the lecture notes
int Can::gramsInCan(double volOneGram) {
    double canVol = volume();
    double numGrams;
    int numWholeGrams;
    numGrams = canVol/volOneGram; //calculates number of grams in the can as a double
    numWholeGrams = (int)numGrams; // casts the numGrams to a int 
    return numWholeGrams;
}

void Can::putIntoCan(Product product) {
    double productVol = product.getVolume(); //getting the volume of the product
    double canVol = volume();
    double available_space = canVol - contents; //available spaace is the difference between the volume of the can and the contents of the can
    if(productVol > available_space) {//not enough space to fit the product
        cout << "The amount of product is larger than the current abailable space in the can.\n";
        return;
    }
    
    //above condition was false; product will fit into can
    contents += productVol; //inctiment contents by the volume of the product
    return;
}

void Can::printCanDetails() {
    //print all the can details
    cout << "\nCan Details.\n";
    cout << "--------------------------\n";
    cout << "Radius: " << radius << endl;
    cout << "Height: " << height << endl;
    cout << "Volume: " << volume() << endl;
    cout << "Contents: " << contents << endl;
}

