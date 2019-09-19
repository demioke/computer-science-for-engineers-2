class Distance {
    private:
        int metres;
        int centimetres;
        int millimetres;
        
    public:
        Distance(int numOfMillimeters);
        //this constructor instanciates a distance by converting the given number of millimetres to metres, centimetres and millimetres
        
        Distance operator+(Distance d);
        //overloading the + operator
        
        float operator-(Distance d);
        //overloading the - operator
        
        bool operator>(Distance d);
        //overloading the - operator
        
        void addCentimeters(int numOfCentimeters);
        //this function adds a given integer number of centimeters to a distance object 
        
        void printDistance();
        //this function prints out the values of a distance objects data values
};