class Product {
    private:
        double volume;
        
    public:
        Product(double v);
        //this constructor initialises a product given the volume of the product
        
        Product();
        //this constructor initialises a product with a default volume of 7.75     
    
        double getVolume();
        //this function returns the volume of the product that invokes it
};